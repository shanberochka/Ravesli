#pragma once
#include <cstring>
#include <iostream>

class Monster
{
public:
	enum MonsterType
	{
		Dragon,
		Goblin, 
		Ogre, 
		Orc, 
		Skeleton, 
		Troll, 
		Vampire, 
		Zombie,
		MAX_MONSTER_TYPES
	};

private:
	MonsterType m_type;
	std::string m_name;
	int m_health;

public:
	Monster();
	Monster(MonsterType, std::string, int);
	~Monster();
	std::string getTypeString() const;

	void print();
};

