#pragma once
#include <iostream>
#include <string>
#include "Player.h"
#include <fstream>

class Console
{
public:

	bool PromptForBool(std::string messege);
	void Prompt(std::string msg, std::string* var);
	void PrintMenu();
	void PrintLore();
	void PrintPlayerStatus(Player* player);
	int PromptForInventoryPlace(int place, std::string messege);
	std::string PromptForMenuDecision();
	std::string PromptForName();
	//std::string PromptForDirection();
	void PromptForDirection(std::string mess);
};