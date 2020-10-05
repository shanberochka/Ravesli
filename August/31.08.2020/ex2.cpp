/*
* ������� �2
* �������� ����������� �������, ������� ��������� ����� ����� � �������� ������� ������ �
* ���������� ����� ���� ����� ����� �������� (��������, 482 = 4 + 8 + 2 = 14).
* ������������� ���� ���������, ��������� ����� 83569 (����������� ������ ���� 31).
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
