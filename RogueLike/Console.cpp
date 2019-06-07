#include "Console.h"


void Console::prompt(std::string msg, std::string* var)
{
	std::cout << msg;
	std::getline(std::cin, *var);
}

bool Console::PromptForBool(std::string messege)
{
	{
		std::string input;

		do
		{
			prompt(messege, &input);
		} while (input != "yes" && input != "no");

		if (input == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

void Console::print_menu()
{
	std::cout << "Totally innovative RogueLike game" << std::endl << std::endl << "You can choose from three classes: " << std::endl
		<< "Warrior" << std::endl << "Mage" << std::endl << "Hunter" << std::endl << std::endl << std::endl;
	std::cout << "To choose class and start game just type class archetype or exit if you don't want to play: " << std::endl;
}

std::string Console::PromptForMenuDecision()
{
	std::string input;
	do
	{
		prompt("", &input);
	} while (input != "Warrior" && input != "Mage" && input != "Hunter" && input != "exit");

	return input;
}

std::string Console::PromptForName()
{
	std::string input;
	do
	{
		prompt("", &input);
	} while (input.length() > 15);
	return std::string();
}
