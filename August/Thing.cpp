#include <iostream>
#include <string>

class Thing
{
 private:
    std::string m_color = "blue";
    double m_radius = 20.0
public:
    Thing(){}
    Thing(const std::string &color): m_color(color){}
    Thing(double radius): m_radius(radius){}
    Thing(const std::string &color, double radius): m_color(color), m_radius(radius){}
};