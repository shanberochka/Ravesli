#include "Department.h"
Department::Department()
{
}
void Department::add(Worker* w)
{
	m_workers.push_back(w);
}

std::ostream& operator<<(std::ostream& out, const Department& department)
{
	out << "Department: \n";
	for (auto &worker: department.m_workers)
		out << worker->getName() << "\t";
	out << "\n";

	return out;
}