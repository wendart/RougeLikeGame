#pragma once
#include <iostream>

class Potion
{
	int HealValue;

public:
	Potion(int lvl);
	int Heal();
	void PrintPotionValue();
};