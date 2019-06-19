#pragma once
#include <string>
#include <iostream>
#include "Equipment.h"

class Player
{
protected:
	std::string Name;
	int HealthPoints;
	int Damage;
	int Armour;
	int Level;
	int EvasionChance;
	Equipment eq;

public:
	Player();
	std::string GetName();
	void InventoryManagement();
	int GetHealth();
	int GetLevel();
	void SetHealth(int _HP);
	//virtual void LevelUp() = 0;
	//std::string ChoosePath();
	//std::string MakeDecision();
	virtual int Attac() = 0;


};