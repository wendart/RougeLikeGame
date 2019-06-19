#include "Engine.h"

void Engine::PrepareGame()
{
	/*
	std::string decision;
	Console* c1 = new Console();
	ItemGenerator* generator = new ItemGenerator();
	FileWriter* writter = new FileWriter();
	Rand* random = new Rand();
	*/

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
	do
	{
		console->PromptForDirection("Which way do you want to go \nright \nstraight \nleft\n");
		if (random->MonsterAppearnce() < 90)
		{
			std::cout << "Fight" << std::endl;
			this->MonsterFight(p1);
		}
		else
		{
			//p1.InventoryManagement();
		}

		CURSED_TOTEM = true;
	} while (CURSED_TOTEM == false);

}

void Engine::MonsterFight(Player* p1)
{
	Monster* enemy = new Monster(random, p1->GetLevel());
	do
	{
		enemy->SetHP(enemy->GetHP() - p1->Attac());
		std::cout << "You've just attacked monster dealing " << p1->Attac() << " damage. Monster health " << enemy->GetHP() << std::endl;
		if (enemy->GetHP() > 0)
		{
			p1->SetHealth(p1->GetHealth() - enemy->Attack());
			std::cout << "You've just been attacked and taken " << enemy->Attack() << " damage. Your health " << p1->GetHealth() << std::endl;
		}

	} while (p1->GetHealth() >= 0 && enemy->GetHP() >= 0);
}
