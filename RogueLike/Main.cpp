#include <iostream>
#include "Console.h"

int main()
{
	Console c1;
	c1.print_menu();
	
	std::cout << c1.PromptForMenuDecision() << std::endl;
	std::cout << c1.PromptForName();
}