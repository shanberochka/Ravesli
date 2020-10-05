#include <iostream> 
#include <string>
#include "Point.h"
#include "Circle.h"
#include "Triangle.h"
#include <vector>
#include <functional>

class Animal
{
protected:
	std::string m_name;
	const char* m_speak;
	// Мы делаем этот конструктор protected так как не хотим, чтобы пользователи создавали объекты класса Animal напрямую,
	// но хотим, чтобы у дочерних классов доступ был открыт
	Animal(std::string name, const char* speak)
		: m_name(name), m_speak(speak)
	{
	}

public:
	std::string getName() { return m_name; }
	const char* speak() { return m_speak; }
};

class Cat : public Animal
{
public:
	Cat(std::string name)
		: Animal(name, "Meow")
	{
	}

};

class Dog : public Animal
{
public:
	Dog(std::string name)
		: Animal(name, "Woof")
	{
	}

};


void ex162()
{

	Cat matros("Matros"), ivan("Ivan"), martun("Martun");
	Dog barsik("Barsik"), tolik("Tolik"), tyzik("Tyzik");

	// Создаем массив указателей на наши объекты Cat и Dog
	Animal* animals[] = { &matros, &ivan, &martun, &barsik, &tolik, &tyzik };
	for (int iii = 0; iii < 6; iii++)
		std::cout << animals[iii]->getName() << " says " << animals[iii]->speak() << '\n';

}

int getLargestRadius(const std::vector<Shape*>&v)
{
	int largestRadius{ 0 };

	for (auto const& elem : v)
	{
		if (Circle * c = dynamic_cast<Circle*>(elem))
		{
			if (c->getRadius() > largestRadius)
				largestRadius = c->getRadius();
		}
	}
	return largestRadius;
}

void exh_12()
{

	std::vector<Shape*> v;
	v.push_back(new Circle(Point(1, 2, 3), 7));
	v.push_back(new Triangle(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9)));
	v.push_back(new Circle(Point(4, 5, 6), 3));

	for (auto const& elem : v)
	{
		std::cout << *elem << "\n";
	}

	std::cout << "The largest radius is: " << getLargestRadius(v) << '\n'; 

	for (auto const& elem : v)
	{
		delete elem;
	}
}