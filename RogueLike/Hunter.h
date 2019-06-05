#pragma once
#include "Player.h"
#include <string>

class Mage : public Player
{
private:
	void HunterPerksUpdate();

protected:

public:
	virtual void LevelUp();
	virtual int Attac();


};