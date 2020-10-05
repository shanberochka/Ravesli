#pragma once
#include <iostream>
class Fraction
{
private:
	int m_numerator=0;
	int m_denominator=1;

public:
	Fraction();
	Fraction(int, int);
	int getNum();
	void setNum(int);

	int getDenum();
	void setDenum(int);

	void print()const;

	friend Fraction operator*(const Fraction&, int);
	friend Fraction operator*(int, const Fraction&);
	friend Fraction operator*(const Fraction&, const Fraction&);

	static int nod(int a, int b) 
	{
		return (b == 0) ? (a > 0 ? a : -a) : nod(b, a % b);
	}

	//int getNod()const;
	void reduce();
};

