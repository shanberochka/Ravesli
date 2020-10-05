/*
* ������� �1
* ��������� ������ ����� N ������������ ��� ��������� ���� ����� ����� 1 � N (0! = 1). 
* �������� ����������� ������� factorial(), ������� ���������� ��������� �����. 
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