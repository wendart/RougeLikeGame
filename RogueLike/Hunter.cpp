#include "Hunter.h"

Hunter::Hunter(std::string name)
{
	Name = name;
	EvasionChance = 10;
	Armour = 0;
	Damage = 2;
	HealthPoints = 30;
	std::cout << "utworzono huntera";
}

void Hunter::LevelUp()
{
	this->Level = this->Level + 1;
	HealthPoints = HealthPoints + 5;
	if (this->Level % 5 == 0)
	{
		EvasionChance = EvasionChance + 1;
	}
	Damage = Damage + 2;
}

int Hunter::Attac()
{
	return this->Damage + 9;
}

std::string Hunter::GetName()
{
	return this->Name;
}
