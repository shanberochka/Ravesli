#include "ArrayInt.h"
ArrayInt::ArrayInt():
	m_length(0), m_data(nullptr)
{
}

ArrayInt::ArrayInt(int length) :
	m_length(length)
{
	m_data = new int[length];
}

ArrayInt::ArrayInt(const std::initializer_list<int>& list) : // позволяем инициализацию ArrayInt через список инициализации
	ArrayInt(list.size()) // используем концепцию делегирования конструкторов для создания начального массива, в который будет выполняться копирование элементов
{
	// Инициализация нашего начального массива значениями из списка инициализации
	int count = 0;
	for (auto& element : list)
	{
		m_data[count] = element;
		++count;
	}
}

ArrayInt::~ArrayInt()
{
	delete[] m_data;
	// Нам не нужно здесь присваивать значение null для m_data или выполнять m_length = 0, так как объект будет уничтожен сразу же после выполнения этой функции
}

int& ArrayInt::operator[](int index)
{
	assert(index >= 0 && index < m_length);
	return m_data[index];
}

int ArrayInt::getLength() { return m_length; }


ArrayInt& ArrayInt::operator=(const std::initializer_list<int>& list)
{
	if (list.size() != static_cast<size_t>(m_length))
	{
		delete[] m_data;

		m_length = list.size();
		m_data = new int[m_length];
	}
	int count = 0;
	for (auto& element : list)
	{
		m_data[count] = element;
		++count;
	}
	return *this;
}