#include "Engine.h"

const double FIGHT_CHANCE = 0.90;
const double POTION_CHANCE = 0.60;
const double LOOT_CHANCE = 1;

void Engine::Start()
{
	try 
	{
		PrepareGame();
		Game();
	}
	catch (GAME_OVER& e)
	{
		std::cout << "You've been killed, your body will never be found." << std::endl;
	}
}

Engine::~Engine()
{
	if (player != NULL)
	{
		delete this->player;
	}
	
	delete this->console;
	delete this->generator;
	delete this->writter;
}

void Engine::PrepareGame()
{
	this->console->PrintMenu();
	std::string characterClass = console->PromptForMenuDecision();

	if (characterClass == "exit")
	{
		exit(0);
		return;
	}

	std::cout << "Choose your name: " << std::endl;
	std::string name = console->PromptForName();

	CreatePlayerWithName(characterClass, name);
}

void Engine::CreatePlayerWithName(std::string characterClass, std::string name)
{
	if (characterClass == "Hunter")
	{
		player = new Hunter(name);
	}
	else if (characterClass == "Mage")
	{
		player = new Mage(name);
	}
	else if (characterClass == "Warrior")
	{
		player = new Warrior(name);
	}
}

void Engine::Game()
{
	system("cls");
	this->console->PrintLore();
	system("pause");
	system("cls");
	console->PrintPlayerStatus(player);
	do
	{
		//console->PromptForDirection("Which way do you want to go \nright \nstraight \nleft\n");
		if (IsMonsterFound() == true)
		{
			ActionMonsterFight();
		}
		else
		{
			PeacefulPlace();
		}

		if (IsPotionFound() == true)
		{
			PotionFound();
		}

		EvaluateEndGameCondition();
	} while (IsGameFinished() == false);

	std::cout << "End game -> it will be story here" << std::endl;
	writter->SaveFinalStatus(player);
}

void Engine::ActionMonsterFight()
{
	system("cls");
	console->PrintPlayerStatus(player);
	std::cout << "Fight" << std::endl;
	this->MonsterFight();
}

void Engine::PotionFound()
{
	system("cls");
	console->PrintPlayerStatus(player);
	player->Potions.push_back(generator->GeneratePotion(player->GetLevel()));
	std::cout << "In dust you see a shiny object, as you grab it, it appears to be a HealthPotion" << std::endl;
	system("pause");

	AskForPotionDrinkage();
}

bool Engine::IsGameFinished()
{
	if (CURSED_TOTEM == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Engine::EvaluateEndGameCondition()
{
	if (RANDOM.TotemSearch(player->GetLevel()) >= 90 && player->GetLevel() >= 25)
	{
		CURSED_TOTEM = true;
	}
}

bool Engine::IsPotionFound()
{
	return player->GetLevel() % 2 == 0 && RandomChance(POTION_CHANCE);
}

void Engine::PeacefulPlace()
{
	system("cls");
	console->PrintPlayerStatus(player);
	std::cout << "You've chosen right path, there are no monsters nearby. Now you can peacfully magnage yoour equipment." << std::endl;

	ChangeWeapon();
	AskForPotionDrinkage();
}

bool Engine::IsMonsterFound()
{
	return RandomChance(FIGHT_CHANCE);
}

bool Engine::RandomChance(double chance)
{
	double result = RANDOM.Random100() / double(100);
	return result <= chance;
}

void Engine::MonsterFight()
{
	int roundNumber = 1;
	Monster* enemy = new Monster(player->GetLevel());
	do
	{
		FightPerformRound(enemy, roundNumber);

		if (player->IsDead() == true)
		{
			throw GAME_OVER();
		}

		if (enemy->IsDead() == true)
		{
			player->LevelUp();
			ObtainLoot();
			ChangeWeapon();
			AskForPotionDrinkage();
		}

		system("pause");
		system("cls");
		console->PrintPlayerStatus(player);
		roundNumber++;
		
	} while (player->IsDead() == false && enemy->IsDead() == false);
}

void Engine::ChangeWeapon()
{
	if (player->Weapons.empty() == true)
	{
		return;
	}

	bool decision = console->PromptForBool("Do you want to change weapon? ");
	if (decision == true)
	{
		player->PrintWeapons();
		player->WeaponChange(console->PromptForInventoryPlace(player->Weapons.size(), "Pick weapon you want from inventory (number) "));
	}
	else if (player->Weapons.empty() != true)
	{
		player->PrintWeapons();
	}
}

void Engine::ObtainLoot()
{
	if (RandomChance(LOOT_CHANCE) == false)
	{
		return;
	}

	Weapon* loot = generator->GenerateWeapon(player->GetLevel());
	std::cout << "Monster dropped: ";
	loot->PrintWeaponInfo();

	bool decision = console->PromptForBool("Do you want to keep this? ");

	if (decision == false)
	{
		return;
	}

	if (player->Weapons.size() >= MAX_WEAPON_COUNT)
	{
		if (console->PromptForBool("You have full backpack. Do you want to throw out something to make some free space? ") == true)
		{
			player->PrintWeapons();
			player->WeaponRemoval(console->PromptForInventoryPlace(player->Weapons.size(), "Pick weapon you want to throw out "));
			player->Weapons.push_back(loot);
		}
	}
	else
	{
		player->Weapons.push_back(loot);
	}
}

void Engine::FightPerformRound(Monster* enemy, int roundNumber)
{
	int a = player->Attack();
	enemy->SetHP(enemy->GetHP() - a);
	std::cout << "ROUND " << roundNumber << std::endl << "You've just attacked " << enemy->PrintMonsterType() << "dealing " << a << " damage. Monster health " << enemy->GetHP() << std::endl;
	if (enemy->IsDead() == false)
	{
		int initialPlayerHP = player->GetHealth();
		player->TakeDamage(enemy->Attack());
		std::cout << "You've just been attacked by " << enemy->PrintMonsterType();

		if (player->GetHealth() == initialPlayerHP)
		{
			std::cout << "and performed susuccessfuln dodge. Your health " << player->GetHealth() << std::endl;
		}
		else
		{
			std::cout << "Enemy strikes with " << enemy->Attack() << " damage. Your health " << player->GetHealth() << std::endl;
		}
	}
}

void Engine::AskForPotionDrinkage()
{
	if (player->Potions.empty() == true)
	{
		return;
	}

	bool decision = console->PromptForBool("Do you want to drink potion?");
	if (decision == true)
	{
		player->PrintPotions();
		player->DrinkPotion(console->PromptForInventoryPlace(player->Potions.size(), "Pick potion you want to drink"));
	}
}

