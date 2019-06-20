#include "Mage.h"

Mage::Mage(std::string name)
{
	Name = name;
	Damage = 3;
	HealthPoints = 20;
	weapon = new Dagger(1, 2);
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

int Mage::Attack()
{
	return this->Damage + 10 + weapon->DealDamage();
}

std::string Mage::GetName()
{
	return this->Name;
}
