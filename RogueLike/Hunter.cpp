#include "Hunter.h"

Hunter::Hunter(std::string name)
{
	Name = name;
	EvasionChance = 10;
	Damage = 2;
	HealthPoints = 30;
	std::cout << "utworzono huntera";
}

int Hunter::Attac()
{
	return this->Damage + 9;
}
