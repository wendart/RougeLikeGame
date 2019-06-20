#include "Warrior.h"

Warrior::Warrior(std::string name)
{
	Name = name;
	Armour = 10;
	Damage = 1;
	HealthPoints = 40;
	weapon = new Dagger(1,3);
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

int Warrior::Attack()
{
	return this->Damage + 8 + weapon->DealDamage();
}

std::string Warrior::GetName()
{
	return this->Name;
}
