#include "Console.h"

void prompt(std::string msg, std::string* var)
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
