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

class GAME_OVER {};

class Engine
{
private:
	bool CURSED_TOTEM = false;
	std::string decision;
	Player* player = NULL;
	Console* console = new Console();
	ItemGenerator* generator = new ItemGenerator();
	FileWriter* writter = new FileWriter();

public:
	void Start();
	void PrepareGame();
	virtual void Game();
	void MonsterFight();

	void AskForPotionDrinkage(Player* p1);

};