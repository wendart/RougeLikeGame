#include "Hunter.h"

Hunter::Hunter(std::string name)
{
	Name = name;
	EvasionChance = 10;
	Armour = 0;
	Damage = 2;
	HealthPoints = 30;
	weapon = new Dagger(2, 4);
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

int Hunter::Attack()
{
	return this->Damage + 9 + weapon->DealDamage();
}

std::string Hunter::GetName()
{
	return this->Name;
}
