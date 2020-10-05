#include <iostream>

// эта функция получает от пользователя число и возвращает 
int getNum()
{
	std::cout << "Enter an integer: ";
	int num{};
	std::cin >> num;
	return num;
}

// эта функция получает от пользователя и возвращает операцию, которая будет выполнена над числами
char getOperation()
{
	char op;

	do
	{
		std::cout << "Enter an operation ('+', '-', '*', '/'): ";
		std::cin >> op;
	} while ((op != '+') && (op != '-') && (op != '*') && (op != '/'));

	return op;
}

// функция сложения двух чисел
int add(int num1, int num2)
{
	return num1 + num2;
}

// функция вычитания двух чисел
int subtract(int num1, int num2)
{
	return num1 - num2;
}

// функция умножения двух чисел
int multiply(int num1, int num2)
{
	return num1 * num2;
}

// функция деления двух чисел
int divide(int num1, int num2)
{
	return num1 / num2;
}

// определяем псевдоним типа под названием arithmeticFcn, который является указателем на функцию, которая принимает два значения типа int и возвращает значение типа int
typedef int(*arithmeticFcn)(int, int);

// структура, которая имеет два поля: математический оператор типа char и указатель на функция arithmeticFcn
struct arithmeticStruct
{
	char op;
	arithmeticFcn fcn;
};

// статический глобальный массив на основе структуры arithmeticStruct, который инициализирован каждой их 4-х математических операций
static arithmeticStruct arithmeticArray[] =
{
	{'+', add},
	{'-', subtract},
	{'*', multiply},
	{'/', divide}
};

// функция принимает символ выбранного математического оператора и возвращает соответсвущую функцию в качестве указателя на функцию
arithmeticFcn getArithmeticFcn(char op)
{
	for (auto& operation : arithmeticArray)
	{
		if (op == operation.op)
			return operation.fcn;
	}
	return add;
}

int main()
{
	std::cout << "\tWelcome to calculator!\n";
	std::cout << "\tLet's start\n";

	int num1 = getNum();
	char op = getOperation();
	int num2 = getNum();

	// вызов функции getArithmeticFcn()
	arithmeticFcn fcn = getArithmeticFcn(op);

	std::cout << num1 << " " << op << " " << num2 << " = " << fcn(num1, num2) << "\n";

	return 0;
}
