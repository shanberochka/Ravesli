#include "Point.h"
#include <iostream>
#include <cmath>

Point::Point()
{

}

Point::Point(double first, double second): m_a(first), m_b(second)
{
}

Point::~Point()
{

}

void Point::print()const
{
	std::cout << "Point (" << m_a << ", " << m_b << ")\n";
}

double Point::distanceTo(const Point& p) const
{
	return sqrt((m_a - p.m_a) * (m_a - p.m_a) + (m_b - p.m_b) * (m_b - p.m_b));
}

double distanceFrom(const Point& p1, const Point& p2)
{
	return sqrt((p2.m_a - p1.m_a) * (p2.m_a - p1.m_a) + (p2.m_b - p1.m_b) * (p2.m_b - p1.m_b));
}