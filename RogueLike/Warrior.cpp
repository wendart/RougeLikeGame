#include "Warrior.h"

Warrior::Warrior(std::string name)
{
	Name = name;
	Armour = 10;
	Damage = 1;
	HealthPoints = 40;
	std::cout << "utworzono warriora";
}

int Warrior::Attac()
{
	return this->Damage + 8;
}
