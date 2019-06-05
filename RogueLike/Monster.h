#pragma once

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
	int Damage;
	int Health;
	int Armour;

	Monster();
	int Attack();
};