#include "Player.h"

Player::Player()
{
	HealthPoints = 20;
	Damage = 3;
	Armour = 1;
	Level = 1;
	EvasionChance = 0;
	Equipment e1;
	eq = e1;
}

std::string Player::GetName()
{
	return this->Name;
}
