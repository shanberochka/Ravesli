#include <iostream>

// get number from console
int readNumber()
{
	int x;
	std::cout << "Enter a number: ";
	std::cin >> x;
	return x;
}

// calculate and print result
void writeAnswer(int num)
{
	std::cout << "Result is " << num << std::endl;
}