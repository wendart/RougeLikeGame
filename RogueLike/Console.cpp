#include "Console.h"


void Console::Prompt(std::string msg, std::string* var)
{
	std::cout << msg;
	std::getline(std::cin, *var);
}

bool Console::PromptForBool(std::string messege)
{
	std::string input;

	do
	{
		Prompt(messege, &input);
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

void Console::PrintMenu()
{
	std::cout << "Totally innovative RogueLike game" << std::endl << std::endl << "You can choose from three classes: " << std::endl
		<< "Warrior" << std::endl << "Mage" << std::endl << "Hunter" << std::endl << std::endl << std::endl;
	std::cout << "To choose class and start game just type class archetype or exit if you don't want to play: " << std::endl;
}

void Console::PrintLore()
{
	std::cout << "You are walking into the dark pit in the middle of nowhere, to find cursed totem of ancient tribe" <<
		"At the moment you came in entry just collapsed. Your only chance to escape it to find this totem." <<
		"Full of fear and a ittle excited you enter the darkness" << std::endl;
}

void Console::PrintPlayerStatus(Player* player)
{
	std::cout << player->GetName() << std::endl << "Level: " << player->GetLevel() << std::endl << "HP: " << player->GetHealth() << std::endl;
	player->GetWeapon()->PrintWeaponInfo();
	std::cout << std::endl << std::endl;
}

int Console::PromptForInventoryPlace(int max, std::string messege)
{
	std::string input;
	int place;

	do
	{
		Prompt(messege, &input);

		try 
		{
			place = stoi(input);
		}
		catch (std::invalid_argument &e) 
		{
			place = -1;
		};

	} while (place > max || place < 0);

	return place - 1;
}

std::string Console::PromptForMenuDecision()
{
	std::string input;
	do
	{
		std::getline(std::cin, input);
	} while (input != "Warrior" && input != "Mage" && input != "Hunter" && input != "exit");

	return input;
}

std::string Console::PromptForName()
{
	std::string input;
	do
	{
		Prompt("", &input);
	} while (input.length() > 15);
	
	return input;
}

/*
std::string Console::PromptForDirection()
{
	std::string input;
	do
	{
		Prompt("", &input);
	} while (input != "left" && input != "right" && input != "straight");

	return input;
}
*/

void Console::PromptForDirection(std::string mess)
{
	std::string input;
	do
	{
		Prompt(mess, &input);
	} while (input != "left" && input != "right" && input != "straight");
}
