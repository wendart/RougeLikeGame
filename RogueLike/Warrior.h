#pragma once
#include "Player.h"
#include <string>

class Warrior : public Player
{
private:
	void WarriorPerksUpdate();

protected:

public:
	virtual void LevelUp();
	virtual int Attac();


};
