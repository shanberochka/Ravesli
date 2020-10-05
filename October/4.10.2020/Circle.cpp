#include "Circle.h"
Circle::Circle(const Point& p, int r):
	m_c(p), m_radius(r)
{

}

std::ostream& Circle::print(std::ostream& out) const
{
	out << "Circle(" << m_c << ", " << m_radius << ")\n";
	return out;
}


int Circle::getRadius()
{
	return m_radius;
}