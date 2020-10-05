#pragma once
#include "Shape.h"
#include "Point.h"
class Triangle :
	public Shape
{
private:
	Point m_p1, m_p2, m_p3;
public:
	Triangle(const Point&, const Point&, const Point&);

	virtual std::ostream& print(std::ostream&) const override;
};

