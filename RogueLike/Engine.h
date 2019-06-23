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
	Player* player = NULL;
	Console* console = new Console();
	ItemGenerator* generator = new ItemGenerator();
	FileWriter* writter = new FileWriter();

	void MonsterFight();
	void PrepareGame();
	void CreatePlayerWithName(std::string characterClass, std::string name);
	void AskForPotionDrinkage();
	void Game();

	bool IsPotionFound();

	void PeacefulPlace();

	bool IsMonsterFound();

public:
	void Start();
};