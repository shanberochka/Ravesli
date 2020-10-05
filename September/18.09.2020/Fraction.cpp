#include "Fraction.h"

Fraction::Fraction(){}

Fraction::Fraction(int num = 0, int denum = 1) :m_numerator(num), m_denominator(denum) { reduce(); }

int Fraction::getNum()
{
	return m_numerator;
}
void Fraction::setNum(int num)
{
	m_numerator = num;
}

int Fraction::getDenum()
{
	return m_denominator;
}
void Fraction::setDenum(int denum)
{
	m_denominator = denum;
}

void Fraction::print()const
{
	std::cout << m_numerator << "/" << m_denominator << "\n";
}

Fraction operator*(const Fraction& fr, int value)
{
	return Fraction(fr.m_numerator * value, fr.m_denominator);
}
Fraction operator*(int value, const Fraction& fr)
{
	return fr * value;
}

Fraction operator*(const Fraction&f1, const Fraction&f2)
{
	return Fraction(f1.m_numerator * f2.m_numerator, f1.m_denominator * f2.m_denominator);
}
/*
int Fraction::getNod()const
{
	return nod(m_numerator, m_denominator);
}
*/
void Fraction::reduce()
{
	int nod = Fraction::nod(m_numerator, m_denominator);
	m_numerator /= nod;
	m_denominator /= nod;
}