#include <iostream>

double getNumber()
{
	std::cout << "Enter a double value: ";
	double number;
	std::cin >> number;
	return number;
}
char getOperator()
{
	std::cout << "Enter one of the following: +, -, *, or /: ";
	char op;
	std::cin >> op;
	return op;
}

void showResult(const double value1, const double value2, const char op)
{
	if (op == '+')
	{
		std::cout << value1 << " " << op << " " << value2 << " = " << value1 + value2;
	}
	else if (op == '-')
	{
		std::cout << value1 << " " << op << " " << value2 << " = " << value1 - value2;
	}
	else if (op == '*')
	{
		std::cout << value1 << " " << op << " " << value2 << " = " << value1 * value2;
	}
	else if (op == '/')
	{
		std::cout << value1 << " " << op << " " << value2 << " = " << value1 / value2;
	}
	else
	{
		std::cout << "Operation is not definited";
	}
}
void ex3()
{
	double value1 = getNumber();
	double value2 = getNumber();

	char op = getOperator();

	showResult(value1, value2, op);
}

