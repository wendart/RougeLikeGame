#include "Warrior.h"

Warrior::Warrior(std::string name)
{
	this->Class = "Warrior";
	Name = name;
	Armour = 20;
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
void Warrior::TakeDamage(int _damage)
{
	float a = (100 - this->Armour);
	float b = a / 100;
	float c = _damage * b;
	int d = (int)c;
	this->HealthPoints = HealthPoints - d;
}
