#pragma once
#include <string>
#include "Rand.h"

enum MONSTER
{
	Troll,
	Orc,
	Goblin,
	WolvesPack,
	Dragon,
	Ghost,
	Zombie,
	Ghul,
	Treant,
	Basilisk,
	Harpy,
	Triton,
	Lycanthrope,
	Vampire,
	//https://en.wikipedia.org/wiki/Category:Dungeons_%26_Dragons_standard_creatures
};

class Monster
{
	MONSTER Type;
	int Damage;
	int Health;
	int Armour;
	int Level;

public:

	Monster(int lvl);
	int Attack();
	int GetLevel();
	int GetHP();
	void SetHP(int _HP);
};