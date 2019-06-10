#pragma once
#include "Console.h"
#include "Player.h"
#include "Hunter.h"
#include "Mage.h"
#include "Warrior.h"
#include "ItemGenerator.h"
#include "Rand.h"
#include "FileWritter.h"


class Engine
{
private:
	bool CURSED_TOTEM = false;
public:
	void PrepareGame();
	void Game(Player p1, Console c1, ItemGenerator generator, FileWriter writter, Rand random);

};