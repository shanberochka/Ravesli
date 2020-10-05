#include "Monster.h"
#include <iostream>
#include <cstring>

Monster::Monster(){}

Monster::Monster(Monster::MonsterType type, std::string name, int health)
	:m_type(type), m_name(name), m_health(health){}

Monster::~Monster(){}

std::string Monster::getTypeString() const
{
	switch (m_type)
	{
	case Monster::Dragon: 
		return "dragon";
	case Monster::Goblin:
		return "goblin";
	case Monster::Ogre:
		return "ogre";
	case Monster::Orc:
		return "orc";
	case Monster::Skeleton:
		return "skeleton";
	case Monster::Troll:
		return "troll";
	case Monster::Vampire:
		return "vampire";
	case Monster::Zombie:
		return "zombie";
	
	default:
		return "Error!";
	}
}

void Monster::print()
{
	std::cout << m_name << " is the " << Monster::getTypeString() << " has " << m_health << " health points.\n";
}