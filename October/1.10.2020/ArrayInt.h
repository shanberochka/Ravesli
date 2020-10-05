#pragma once
#include <iostream> 
#include <cassert> // ��� assert()
#include <initializer_list> // ��� std::initializer_list

class ArrayInt
{
private:
	int m_length;
	int* m_data;
public:
	ArrayInt();
	ArrayInt(int);
	ArrayInt(const std::initializer_list<int>&);
	~ArrayInt();

	int& operator[](int);
	int getLength();
	
	ArrayInt& operator=(const std::initializer_list<int>&);
};



