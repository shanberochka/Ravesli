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

ArrayInt::ArrayInt(const std::initializer_list<int>& list) : // ��������� ������������� ArrayInt ����� ������ �������������
	ArrayInt(list.size()) // ���������� ��������� ������������� ������������� ��� �������� ���������� �������, � ������� ����� ����������� ����������� ���������
{
	// ������������� ������ ���������� ������� ���������� �� ������ �������������
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
	// ��� �� ����� ����� ����������� �������� null ��� m_data ��� ��������� m_length = 0, ��� ��� ������ ����� ��������� ����� �� ����� ���������� ���� �������
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