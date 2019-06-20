#include "Potion.h"

Potion::Potion(int lvl)
{
	HealValue = lvl * 5;
}

int Potion::Heal()
{
	return HealValue;
}

void Potion::PrintPotionValue()
{
	std::cout << "Heal value: " << HealValue << std::endl;
}
