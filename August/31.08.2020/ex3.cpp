/*
* Задание №3
* Напишите программу, которая просит пользователя ввести целое число,
* а затем использует рекурсивную функцию для вывода бинарного представления этого числа (см. урок №44).
* Предполагается, что число, которое введет пользователь является положительным.
*/

#include <iostream>

int getValue();

void printBinaryNum(unsigned int value)
{
	if (value == 0)
		return;
	printBinaryNum(value / 2);

	std::cout << value % 2;
}

void printBinary(int value)
{
	if (value == 0)
		std::cout << '0';
	else
		printBinaryNum(static_cast<unsigned int>(value));
}
void ex3()
{
	std::cout << "Example #3(Binary)" << std::endl;
	int value = getValue();
	printBinary(value);
	std::cout << std::endl;
}