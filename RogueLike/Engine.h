#pragma once
#include "Console.h"
#include "Player.h"
#include "Hunter.h"
#include "Mage.h"
#include "Warrior.h"
#include "ItemGenerator.h"
#include "Rand.h"
#include "FileWritter.h"
#include "Monster.h"


class Engine
{
private:
	bool CURSED_TOTEM = false;
	std::string decision;
	Console* console = new Console();
	ItemGenerator* generator = new ItemGenerator();
	FileWriter* writter = new FileWriter();

public:
	void PrepareGame();
	virtual void Game(Player* p1);
	void MonsterFight(Player* p1);

};