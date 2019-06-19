#pragma once
#include "Player.h"
#include <string>

class Hunter : public Player
{
private:
	//void HunterPerksUpdate();

protected:

public:
	Hunter(std::string name);
	//virtual void LevelUp();
	virtual int Attac();


};