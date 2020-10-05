#include "Worker.h"
Worker::Worker(std::string name)
	: m_name(name)
{
}

std::string Worker::getName() { return m_name; }