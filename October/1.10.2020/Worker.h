#pragma once
#include <iostream> 
#include <string>

class Worker
{
private:
	std::string m_name;

public:
	Worker(std::string name);

	std::string getName();
};