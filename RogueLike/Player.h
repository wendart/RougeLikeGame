#pragma once
#include <string>
#include <iostream>
#include "Equipment.h"
#include "Weapon.h"
#include "Stuff.h"
#include "Dagger.h"
#include "Sword.h"
#include "Bow.h"
#include "Axe.h"

class Player
{
protected:
	std::string Name;
	int HealthPoints;
	int Damage;
	int Armour;
	int Level = 1;
	int EvasionChance;
	Equipment* eq;
	Weapon* weapon;

public:
	Player();
	virtual std::string GetName() = 0;
	void InventoryManagement();
	int GetHealth();
	int GetLevel();
	void SetHealth(int _HP);
	virtual void LevelUp() = 0;
	//std::string ChoosePath();
	//std::string MakeDecision();
	virtual int Attac() = 0;


};