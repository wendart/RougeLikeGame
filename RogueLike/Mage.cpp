#include "Mage.h"

Mage::Mage(std::string name)
{
	this->Class = "Mage";
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
	int a = this->Damage + RANDOM.BasicDamage(9, 14) + weapon->DealDamage();
	if (this->weapon->getWeaponType() == STAFF)
	{
		a = a + (0, 1 * this->weapon->GetMax());
	}
	return a;
}

std::string Mage::GetName()
{
	return this->Name;
}

void Mage::TakeDamage(int _damage)
{
	HealthPoints = HealthPoints - _damage;
}

