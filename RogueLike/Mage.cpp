#include "Mage.h"

Mage::Mage(std::string name)
{
	this->Class = "Mage";
	Name = name;
	Damage = 3;
	HealthPoints = 30;
	weapon = new Dagger(1, 2);
}

void Mage::LevelUp()
{
	if (this->Level < 10)
	{
		this->Level = this->Level + 1;
		HealthPoints = HealthPoints + 5;
		if (this->Level % 5 == 0)
		{
			Damage = Damage + 5;
		}
		Damage = Damage + 3;
	}
	else
	{
		this->Level = this->Level + 1;
		HealthPoints = HealthPoints + 10;
		if (this->Level % 5 == 0)
		{
			Damage = Damage + 10;
		}
		Damage = Damage + 4;
	}
}

int Mage::Attack()
{
	if (this->Level < 10)
	{
		int a = this->Damage + RANDOM.BasicDamage(7, 9) + weapon->DealDamage();
		if (this->weapon->getWeaponType() == STAFF)
		{
			a = a + (0, 1 * this->weapon->GetMax());
		}
		return a;
	}
	else
	{
		int a = this->Damage + RANDOM.BasicDamage(7, 9) + weapon->DealDamage();
		if (this->weapon->getWeaponType() == STAFF)
		{
			a = a + (0, 1 * this->weapon->GetMax());
		}
		return (int) (a*0.8);
	}

}

std::string Mage::GetName()
{
	return this->Name;
}

void Mage::TakeDamage(int _damage)
{
	HealthPoints = HealthPoints - _damage;
}

