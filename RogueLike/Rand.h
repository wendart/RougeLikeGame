#pragma once
#include <time.h>
#include <stdlib.h>

class Rand
{
private:

	bool ininitialized = false;

public:
	int MonsterAppearnce();
	int MonsterType();
	int MonsterLevel(int lvl);
};