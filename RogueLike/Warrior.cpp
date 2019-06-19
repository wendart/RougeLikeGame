#include "Warrior.h"

Warrior::Warrior(std::string name)
{
	Name = name;
	Armour = 10;
	Damage = 1;
	HealthPoints = 40;
	std::cout << "utworzono warriora";
}

void Warrior::LevelUp()
{
	this->Level = this->Level + 1;
	HealthPoints = HealthPoints + 8;
	if (this->Level % 5 == 0)
	{
		Armour = Armour + 2;
	}
	Damage = Damage + 1;
}

int Warrior::Attac()
{
	return this->Damage + 8;
}

std::string Warrior::GetName()
{
	return this->Name;
}
