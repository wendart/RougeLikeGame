#include "FileWritter.h"

void FileWriter::SaveFinalStatus(Player* player)
{
	std::ofstream FinalStory;
	FinalStory.open("Further fate of " + player->GetName() + ".txt", std::ofstream::out);

	FinalStory << player->GetName() << std::endl << "Level: " << player->GetLevel() << std::endl << "HP: " << player->GetHealth() << std::endl;
	int type = player->GetWeapon()->getWeaponType();

	switch (type)
	{
	case 0:
		FinalStory << "Axe" << std::endl << "Min Damage: " << player->GetWeapon()->GetMin() << std::endl << "Max Damage: " << player->GetWeapon()->GetMax() << std::endl;
		break;
	case 1:
		FinalStory << "Bow" << std::endl << "Min Damage: " << player->GetWeapon()->GetMin() << std::endl << "Max Damage: " << player->GetWeapon()->GetMax() << std::endl;
		break;
	case 2:
		FinalStory << "Dagger" << std::endl << "Min Damage: " << player->GetWeapon()->GetMin() << std::endl << "Max Damage: " << player->GetWeapon()->GetMax() << std::endl;
		break;
	case 3:
		FinalStory << "Staff" << std::endl << "Min Damage: " << player->GetWeapon()->GetMin() << std::endl << "Max Damage: " << player->GetWeapon()->GetMax() << std::endl;
		break;
	case 4:
		FinalStory << "Sword" << std::endl << "Min Damage: " << player->GetWeapon()->GetMin() << std::endl << "Max Damage: " << player->GetWeapon()->GetMax() << std::endl;
		break;

	}

	if (RANDOM.Random100() < 33)
	{
		FinalStory << std::endl << std::endl << "It will be alternate story ending 1 here";
	}
	else if (RANDOM.Random100() < 66)
	{
		FinalStory << std::endl << std::endl << "It will be alternate story ending 2 here";
	}
	else
	{
		FinalStory << std::endl << std::endl << "It will be alternate story ending 3 here";
	}

	FinalStory.close();
}
