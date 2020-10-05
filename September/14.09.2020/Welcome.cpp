#include "Welcome.h"
#include <iostream>

Welcome::Welcome()
{
	m_data = new char[14];
	const char* init = "Hello, World!";
	for (int i = 0; i < 14; ++i)
		m_data[i] = init[i];
}
Welcome::~Welcome()
{
	delete[] m_data;
}

void Welcome::print() const
{
	std::cout << m_data;
}