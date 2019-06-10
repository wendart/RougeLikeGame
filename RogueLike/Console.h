#pragma once
#include <iostream>
#include <string>

class Console
{
public:

	bool PromptForBool(std::string messege);
	void Prompt(std::string msg, std::string* var);
	void PrintMenu();
	void PrintLore();
	std::string PromptForMenuDecision();
	std::string PromptForName();
	//std::string PromptForDirection();
	void PromptForDirection(std::string mess);
};