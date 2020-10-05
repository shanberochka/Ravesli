#pragma once
class Point
{
	double m_a = 0.0;
	double m_b = 0.0;

public:
	Point();
	Point(double, double);

	void print() const;

	double distanceTo(const Point&)const;

	friend double distanceFrom(const Point&, const Point&);

	~Point();
};

