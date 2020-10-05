#include "Point.h"
#include "Welcome.h"
#include "Monster.h"
#include "MonsterGenerator.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

void ex11()
{
	Point first;
	Point second(2.0, 5.0);
	first.print();
	second.print();
}

void ex12()
{
	Point first;
	Point second(2.0, 5.0);
	first.print();
	second.print();
	std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';

}

void ex13()
{

	Point first;
	Point second(2.0, 5.0);
	first.print();
	second.print();
	std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';

}
void ex21()
{
	Welcome hello;
	hello.print();
}

void ex31()
{
	srand(static_cast<unsigned int>(time(0))); 
	rand();

	Monster m = MonsterGenerator::generateMonster();
	m.print();
}

