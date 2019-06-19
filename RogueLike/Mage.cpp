#include "Mage.h"

Mage::Mage(std::string name)
{
	Name = name;
	Damage = 3;
	HealthPoints = 20;
	std::cout << "utworzono maga";
}

void Mage::LevelUp()
{
	this->Level = this->Level + 1;
	HealthPoints = HealthPoints + 3;
	if (this->Level % 5 == 0)
	{
		Damage = Damage + 5;
	}
	Damage = Damage + 3;
}

int Mage::Attac()
{
	return this->Damage + 10;
}

std::string Mage::GetName()
{
	return this->Name;
}
