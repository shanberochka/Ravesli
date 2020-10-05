#include "Department.h"
#include "Worker.h"
#include "ArrayInt.h"

void ex148()
{
	Worker* w1 = new Worker("Anton");
	Worker* w2 = new Worker("Ivan");
	Worker* w3 = new Worker("Max");

	{
		// Создаем Отдел и передаем Работников в качестве параметров конструктора
		Department department; // содаем пустой Отдел
		department.add(w1);
		department.add(w2);
		department.add(w3);

		std::cout << department;

	} // department выходит из области видимости и уничтожается здесь

	std::cout << w1->getName() << " still exists!\n";
	std::cout << w2->getName() << " still exists!\n";
	std::cout << w3->getName() << " still exists!\n";

	delete w1;
	delete w2;
	delete w3;
}
void ex152()
{
	/*ArrayInt array{ 7, 6, 5, 4, 3, 2, 1 }; // список инициализации
	for (int count = 0; count < array.getLength(); ++count)
		std::cout << array[count] << ' ';
*/

	ArrayInt array{ 7, 6, 5, 4, 3, 2, 1 }; // список инициализации
	for (int count = 0; count < array.getLength(); ++count)
		std::cout << array[count] << ' ';

	std::cout << '\n';

	array = { 1, 4, 9, 12, 15, 17, 19, 21 };

	for (int count = 0; count < array.getLength(); ++count)
		std::cout << array[count] << ' ';

}