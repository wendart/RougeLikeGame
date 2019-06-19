#include "Mage.h"

Mage::Mage(std::string name)
{
	Name = name;
	Damage = 3;
	HealthPoints = 20;
	std::cout << "utworzono maga";
}

int Mage::Attac()
{
	return this->Damage + 10;
}
