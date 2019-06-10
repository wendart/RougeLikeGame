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
