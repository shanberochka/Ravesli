#pragma once
#include "Worker.h"
#include <vector>

class Department
{
private:
	std::vector<Worker*> m_workers;

public:
	Department();
	void add(Worker*);

	friend std::ostream& operator<<(std::ostream&, const Department&);
};
