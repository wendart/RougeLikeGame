#include "Engine.h"

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

void Engine::PrepareGame()
{
	this->console->PrintMenu();
	decision = console->PromptForMenuDecision();

	if (decision == "exit")
	{
		exit(0);
	}
	else if(decision == "Hunter")
	{
		std::cout << "Choose your name: " << std::endl;
		player = new Hunter (console->PromptForName());
	}
	else if (decision == "Mage")
	{
		std::cout << "Choose your name: " << std::endl;
		player = new Mage(console->PromptForName());
	}
	else if (decision == "Warrior")
	{
		std::cout << "Choose your name: " << std::endl;
		player = new Warrior(console->PromptForName());
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
		if (RANDOM.Random100() < 90)
		{
			system("cls");
			console->PrintPlayerStatus(player);
			std::cout << "Fight" << std::endl;
			this->MonsterFight();
		}
		else
		{
			system("cls");
			console->PrintPlayerStatus(player);
			std::cout << "You've chosen right path, there are no monsters nearby. Now you can peacfully magnage yoour equipment." << std::endl;
			bool decision;
			if (player->Weapons.empty() != true)
			{
				decision = console->PromptForBool("Do you want to change weapon? ");
				if (decision == true)
				{
					player->PrintWeapons();
					player->WeaponChange(console->PromptForInventoryPlace(player->Weapons.size(), "Pick waepon you want from inventory (number) "));
				}
				else if (player->Weapons.empty() != true)
				{
					player->PrintWeapons();
				}
			}

			if (player->Potions.empty() != true)
			{
				AskForPotionDrinkage(player);
			}
		}

		if (player->GetLevel() % 2 == 0 && RANDOM.Random100() < 70)
		{
			system("cls");
			console->PrintPlayerStatus(player);
			player->Potions.push_back(generator->GeneratePotion(player->GetLevel()));
			std::cout << "In dust you see a shiny object, as you grab it, it appears to be a HealthPotion" << std::endl;
			system("pause");

			AskForPotionDrinkage(player);
		}
		

		if (RANDOM.TotemSearch(player->GetLevel()) >= 90 && player->GetLevel() >= 25)
		{
			CURSED_TOTEM = true;
		}
	} while (CURSED_TOTEM == false);

	std::cout << "End game -> it will be story here" << std::endl;
	console->SaveFinalStatus(player);

}

void Engine::MonsterFight()
{
	int i = 1;
	Monster* enemy = new Monster(player->GetLevel());
	do
	{
		int a = player->Attack();
		enemy->SetHP(enemy->GetHP() - a);
		std::cout << "ROUND " << i << std::endl << "You've just attacked " << enemy->PrintMonsterType() << "dealing " << a << " damage. Monster health " << enemy->GetHP() << std::endl;
		if (enemy->GetHP() > 0)
		{
			int a = player->GetHealth();
			player->TakeDamage(enemy->Attack());
			std::cout << "ROUND " << i << std::endl << "You've just been attacked by " << enemy->PrintMonsterType();
			if (player->GetHealth() == a)
			{
				std::cout << "and performed susuccessfuln doge. Your health " << player->GetHealth() << std::endl;
			}
			else
			{
				std::cout << "Enemy strikes with " << enemy->Attack() << " damage. Your health " << player->GetHealth() << std::endl;
			}
		}
		

		if (player->GetHealth() <= 0)
		{
			throw GAME_OVER();
		}

		if (enemy->GetHP() <= 0)
		{
			player->LevelUp();
			if (RANDOM.Random100() <= 200)
			{
				Weapon* loot = generator->GenerateWeapon(player->GetLevel());
				std::cout << "Monster dropped: ";
				loot->PrintWeaponInfo();
				bool decision = console->PromptForBool("Do you want to keep this? ");
				if (decision == true && player->Weapons.size() < MAX_WEAPON_COUNT)
				{
					player->Weapons.push_back(loot);
				}
				else if (decision == false)
				{
					if (player->Weapons.empty() == true)
					{

					}
				}
				else
				{
					if (console->PromptForBool("You have full backpack. Do you want to throw out something to make some free space? ") == true)
					{
						player->PrintWeapons();
						player->WeaponRemoval(console->PromptForInventoryPlace(player->Weapons.size(), "Pick weapon you want to throw out "));
						player->Weapons.push_back(loot);
					}
				}
			}


			if (player->Weapons.empty() != true)
			{
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


			if (player->Potions.empty() != true)
			{
				AskForPotionDrinkage(player);
			}
		}
		

		system("pause");
		system("cls");
		console->PrintPlayerStatus(player);
		i++;
		
	} while (player->GetHealth() > 0 && enemy->GetHP() > 0);
}

void Engine::AskForPotionDrinkage(Player* player)
{
	bool decision = console->PromptForBool("Do you want to drink potion?");
	if (decision == true)
	{
		player->PrintPotions();
		player->DrinkPotion(console->PromptForInventoryPlace(player->Potions.size(), "Pick potion you want to drink"));
	}
}
