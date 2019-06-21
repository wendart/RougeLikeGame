#include "Hunter.h"

Hunter::Hunter(std::string name)
{
	this->Class = "Hunter";
	Name = name;
	EvasionChance = 10;
	Armour = 0;
	Damage = 2;
	HealthPoints = 70;
	weapon = new Dagger(2, 4);
}

void Hunter::LevelUp()
{
	this->Level = this->Level + 1;
	HealthPoints = HealthPoints + 6;
	if (this->Level % 5 == 0)
	{
		EvasionChance = EvasionChance + 1;
	}
	Damage = Damage + 2;
}

int Hunter::Attack()
{
	int a = 0;
	if (this->weapon->getWeaponType() == BOW || RANDOM.Random100() <= 10)
	{
		a = weapon->GetMin();
	}
	return this->Damage + 8 + a + weapon->DealDamage();
}

std::string Hunter::GetName()
{
	return this->Name;
}

void Hunter::TakeDamage(int _damage)
{
	if (RANDOM.Random100() < this->EvasionChance)
	{
		HealthPoints = HealthPoints;
	}
	else
	{
		HealthPoints = HealthPoints - _damage;
	}
}
