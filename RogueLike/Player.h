#pragma once
#include <string>
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
	virtual void LevelUp();
	std::string ChoosePath();
	std::string MakeDecision();
	virtual int Attac();


};