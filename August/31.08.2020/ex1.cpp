/*
* Задание №1
* Факториал целого числа N определяется как умножение всех чисел между 1 и N (0! = 1). 
* Напишите рекурсивную функцию factorial(), которая возвращает факториал ввода. 
*/
#include <iostream>

int getValue();

int factorial(int num)
{
	if (num < 1)
		return 1;
	else 
		return factorial(num - 1) * num;
}
void ex1()
{
	std::cout << "Example #1(Factorial)" << std::endl;
	int value = getValue();
	std::cout << "Factirial of the " << value << " is " << factorial(value);
	std::cout << std::endl;
}