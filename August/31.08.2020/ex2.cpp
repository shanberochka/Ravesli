/*
* Задание №2
* Напишите рекурсивную функцию, которая принимает целое число в качестве входных данных и
* возвращает сумму всех чисел этого значения (например, 482 = 4 + 8 + 2 = 14).
* Протестируйте вашу программу, используя число 83569 (результатом должно быть 31).
*/

#include <iostream>

int getValue();

int digitSum(int num)
{
	if (num < 10)
		return num;
	else
		return digitSum(num / 10) + num % 10;
}

void ex2()
{
	std::cout << "Example #2(Digits sum)" << std::endl;
	int value = getValue();
	std::cout << value << " digits sum is " << digitSum(value);
	std::cout << std::endl;
}
