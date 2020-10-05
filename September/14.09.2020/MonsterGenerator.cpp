#include "MonsterGenerator.h"

int MonsterGenerator::getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0); // используем static, так как это значение нужно вычислить единожды
		// Равномерно распределяем вычисление значения из нашего диапазона
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
Monster MonsterGenerator::generateMonster()
{
	Monster::MonsterType type = static_cast<Monster::MonsterType>(getRandomNumber(0, Monster::MAX_MONSTER_TYPES - 1));

	int health = getRandomNumber(1, 100);

	static std::string s_names[6]{ "Alex", "Boris", "Kito", "John", "Recrut", "Fugo" };

	return Monster(type, s_names[getRandomNumber(0, 5)], health);
}

