#include "Rand.h"

Rand RANDOM;

int Rand::Random100()
{
	if (!this->ininitialized)
	{
		srand(time(NULL));
		this->ininitialized = true;
	}

	return (rand() % 100) + 1;
}

int Rand::WeaponRoll()
{
	if (!this->ininitialized)
	{
		srand(time(NULL));
		this->ininitialized = true;
	}

	return (rand() % 6);
}

int Rand::MonsterType()
{
	if (!this->ininitialized)
	{
		srand(time(NULL));
		this->ininitialized = true;
	}

	return (rand() % 14) ;
}

int Rand::MonsterLevel(int lvl)
{
	if (!this->ininitialized)
	{
		srand(time(NULL));
		this->ininitialized = true;
	}

	int a = ((rand() % 6) - 3);

	return lvl + a;
}

int Rand::BasicDamage(int min, int max)
{
	if (!this->ininitialized)
	{
		srand(time(NULL));
		this->ininitialized = true;
	}
	int a = (max - min) + 1;
	return ((rand() % a) + min);
}
