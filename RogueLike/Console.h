#pragma once
#include <string>
#include <iostream>

class Console
{
	bool PromptForBool(std::string messege);
	std::string PromptForDirection();
	std::string PromptForDecision();
	void prompt(std::string msg, std::string* var);
}