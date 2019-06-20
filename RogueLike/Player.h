#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Weapon.h"
#include "Stuff.h"
#include "Dagger.h"
#include "Sword.h"
#include "Bow.h"
#include "Axe.h"
#include "Potion.h"

class Player
{
protected:
	std::string Name;
	int HealthPoints;
	int Damage;
	int Armour;
	int Level = 1;
	int EvasionChance;
	Weapon* weapon;

public:
	Player();
	virtual std::string GetName() = 0;
	void WeaponChange(int place);
	void PrintWeapons();
	void PrintPotions();
	int GetHealth();
	int GetLevel();
	void SetHealth(int _HP);
	virtual void LevelUp() = 0;
	virtual int Attack() = 0;
	Weapon* GetWeapon();

	std::vector <Weapon*> Weapons;
	std::vector <Potion*> Potions;


};