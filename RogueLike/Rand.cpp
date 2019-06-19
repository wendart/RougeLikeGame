#include "Rand.h"

int Rand::MonsterAppearnce()
{
	if (!this->ininitialized)
	{
		srand(time(NULL));
		this->ininitialized = true;
	}

	return (rand() % 100) + 1;
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
