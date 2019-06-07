#include "Engine.h"

void Engine::PrepareGame()
{
	std::string decision;
	Console c1;
	c1.print_menu();
	decision = c1.PromptForMenuDecision();

	if (decision == "exit")
	{
		exit;
	}
	else if(decision == "Hunter")
	{
		std::cout << "Choose your name: " << std::endl;
		Hunter p1(c1.PromptForName());
	}
	else if (decision == "Mage")
	{
		std::cout << "Choose your name: " << std::endl;
		Mage p1(c1.PromptForName());
	}
	else if (decision == "Warrior")
	{
		std::cout << "Choose your name: " << std::endl;
		Warrior p1(c1.PromptForName());
	}
}
