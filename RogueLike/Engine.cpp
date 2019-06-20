#include "Engine.h"

void Engine::PrepareGame()
{

	this->console->PrintMenu();
	decision = console->PromptForMenuDecision();
	Player* player = NULL;

	if (decision == "exit")
	{
		exit;
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

	Game(player);
}

void Engine::Game(Player* p1)
{
	system("cls");
	this->console->PrintLore();
	system("pause");
	system("cls");
	console->PrintPlayerStatus(p1);
	do
	{
		//console->PromptForDirection("Which way do you want to go \nright \nstraight \nleft\n");
		if (RANDOM.Random100() < 90)
		{
			std::cout << "Fight" << std::endl;
			this->MonsterFight(p1);
		}
		else
		{
			//p1.InventoryManagement();
		}

		if (p1->GetLevel() % 4 == 0 && RANDOM.Random100() < 90)
		{
			p1->Potions.push_back(generator->GeneratePotion(p1->GetLevel()));
			std::cout << "In dust you see a shiny object, as you grab it, it appears to be a HealthPotion" << std::endl;
			p1->PrintPotions();
		}


		if(p1->GetLevel() == 6)
		CURSED_TOTEM = true;
	} while (CURSED_TOTEM == false);

}

void Engine::MonsterFight(Player* p1)
{
	int i = 1;
	Monster* enemy = new Monster(p1->GetLevel());
	do
	{
		enemy->SetHP(enemy->GetHP() - p1->Attack());
		std::cout << "ROUND " << i << std::endl << "You've just attacked monster dealing " << p1->Attack() << " damage. Monster health " << enemy->GetHP() << std::endl;
		if (enemy->GetHP() > 0)
		{
			p1->SetHealth(p1->GetHealth() - enemy->Attack());
			std::cout << "ROUND " << i << std::endl << "You've just been attacked and taken " << enemy->Attack() << " damage. Your health " << p1->GetHealth() << std::endl;
		}
		
		if (enemy->GetHP() <= 0)
		{
			p1->LevelUp();
			Weapon* loot = generator->GenerateWeapon(p1->GetLevel());
			std::cout << "Monster dropped: ";
			loot->PrintWeaponInfo();
			bool decision = console->PromptForBool("Do you want to keep this? ");
			if (decision == true)
			{
				p1->Weapons.push_back(loot);
			}
			else
			{
				loot->~Weapon();
			}


			decision = console->PromptForBool("Do you want to change weapon? ");
			if (decision == true)
			{
				p1->PrintWeapons();
				p1->WeaponChange(console->PromptForInventoryPlace(p1->Weapons.size(), "Pick waepon you want from inventory (number) "));
			}
			else
			{
				p1->PrintWeapons();
			}

			if (p1->Potions.empty() != true)
			{
				decision = console->PromptForBool("Do you want to drink potion?");
					if (decision = true)
					{
						p1->PrintPotions();
					}
			}
		}
		

		system("pause");
		system("cls");
		console->PrintPlayerStatus(p1);
		i++;
		
	} while (p1->GetHealth() > 0 && enemy->GetHP() > 0);
}
