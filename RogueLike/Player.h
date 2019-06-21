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

const int MAX_WEAPON_COUNT = 2;

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
	std::string Class;
	virtual std::string GetName() = 0;
	void WeaponChange(int place);
	void WeaponRemoval(int place);
	void PrintWeapons();
	void PrintPotions();
	void DrinkPotion(int place);
	int GetHealth();
	int GetLevel();
	virtual void TakeDamage(int _HP) = 0;
	virtual void LevelUp() = 0;
	virtual int Attack() = 0;
	Weapon* GetWeapon();

	std::vector <Weapon*> Weapons;
	std::vector <Potion*> Potions;


};