#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using list_type = std::vector<int>;

namespace config
{
	constexpr int min{ 2 };
	constexpr int max{ 4 };
	constexpr int dif{ 4 };
}

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

list_type generateNumbers(int start, int count, int multiplier)
{
	list_type numbers(static_cast<list_type::size_type>(count));

	for (auto& number : numbers)
	{
		number = ((start * start) * multiplier);
		++start;
	}
	return numbers;
}

list_type generateUserNumbers(int multiplier)
{
	int start{};
	int count{};

	std::cout << "Start number: ";
	std::cin >> start;

	std::cout << "How many? ";
	std::cin >> count;

	return generateNumbers(start, count, multiplier);
}


int main()
{
	int multiplier{ getRandomNumber(config::min, config::max) };
	list_type numbers{ generateUserNumbers(multiplier) };

	printTask()
}
