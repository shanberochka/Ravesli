#include <iostream>
#include <cstring>
#include <array>


struct Student
{
	std::string name;
	int mark;
};

void ex1()
{
	std::array <Student, 2> arr
	{
		{
			{"Albert", 3},
			{"Ben", 5}
		}
	};

	auto best{
		std::max_element(arr.begin(), arr.end(), [](const auto& a, const auto& b)
			{
				return (a.mark < b.mark);
			})
	};

	std::cout << best->name;
	// std::cout << (*best).name; 
}