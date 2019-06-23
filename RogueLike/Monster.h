#pragma once
#include <string>
#include "Rand.h"
#include <iostream>

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
	std::string PrintMonsterType();
	bool IsDead();
};