#pragma once
#include <time.h>
#include <stdlib.h>



class Rand
{
private:

	bool ininitialized = false;

public:
	int Random100();
	int MonsterType();
	int MonsterLevel(int lvl);
	int BasicDamage(int min, int max);
};

extern Rand RANDOM;