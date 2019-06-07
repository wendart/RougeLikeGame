#pragma once
#include <iostream>
#include <string>

class Console
{
public:

	bool PromptForBool(std::string messege);
	void prompt(std::string msg, std::string* var);
	void print_menu();
	std::string PromptForMenuDecision();
	std::string PromptForName();
};