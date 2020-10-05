#pragma once
#include "Shape.h"
#include "Point.h"
class Circle :
	public Shape
{
private:
	Point m_c;
	int m_radius;
public:
	Circle(const Point&, int);
	
	virtual std::ostream& print(std::ostream&) const override;

	int getRadius();
};

