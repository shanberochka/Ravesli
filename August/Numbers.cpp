
#include <iostream>

class Numbers
{
    private:
    double m_a;
    double m_b;
    double m_c;
    
    public:
    void setValues( double x, double y, double z)
    {
        m_a = x;
        m_b = y;
        m_c = z;
    }
    
    void print()
    {
        std::cout << "<" << m_a << ", " << m_b << ", " << m_c << ">" << std::endl;
    }
    
    bool isEqual(Numbers &num)
    {
        return (num.m_a == m_a && num.m_b == m_b && num.m_c == m_c);
    }
};

void ex1()
{
    Numbers point1;
	point1.setValues(3.0, 4.0, 5.0);
 
	Numbers point2;
	point2.setValues(3.0, 4.0, 5.0);
 
	if (point1.isEqual(point2))
		std::cout << "point1 and point2 are equal\n";
	else
		std::cout << "point1 and point2 are not equal\n";
 
	Numbers point3;
	point3.setValues(7.0, 8.0, 9.0);
 
	if (point1.isEqual(point3))
		std::cout << "point1 and point3 are equal\n";
	else
		std::cout << "point1 and point3 are not equal\n";
}