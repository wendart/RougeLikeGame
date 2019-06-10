#include "Engine.h"

void Engine::PrepareGame()
{
	std::string decision;
	Console c1;
	ItemGenerator generator;
	FileWriter writter;
	Rand random;

	c1.PrintMenu();
	decision = c1.PromptForMenuDecision();

	if (decision == "exit")
	{
		exit;
	}
	else if(decision == "Hunter")
	{
		std::cout << "Choose your name: " << std::endl;
		Hunter p1(c1.PromptForName());
		Game(p1,c1,generator,writter,random);
	}
	else if (decision == "Mage")
	{
		std::cout << "Choose your name: " << std::endl;
		Mage p1(c1.PromptForName());
		Game(p1, c1, generator, writter, random);
	}
	else if (decision == "Warrior")
	{
		std::cout << "Choose your name: " << std::endl;
		Warrior p1(c1.PromptForName());
		Game(p1, c1, generator, writter, random);
	}
}

void Engine::Game(Player p1, Console c1, ItemGenerator generator, FileWriter writter, Rand random)
{
	system("cls");
	c1.PrintLore();
	do
	{
		c1.PromptForDirection("Which way do you want to go \nright \nstraight \nleft\n");
		if (random.MonsterAppearnce() < 90)
		{
			this.MonsterFight()
		}
		else
		{
			p1.InventoryManagement();
		}

		CURSED_TOTEM = true;
	} while (CURSED_TOTEM == false);

}
