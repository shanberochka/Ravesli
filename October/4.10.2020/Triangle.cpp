#include "Triangle.h"

Triangle::Triangle(const Point& p1, const Point& p2, const Point& p3):
	m_p1(p1), m_p2(p2), m_p3(p3)
{

}

std::ostream& Triangle::print(std::ostream& out) const 
{
	out << "Triangle" << m_p1 << ", " << m_p2 << ", " << m_p3 << ")\n";
	return out;
}
