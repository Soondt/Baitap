#include "Circle.hpp"
#include <math.h>

Circle::Circle(float x1, float x2, float r)
    {
        m_center.x=x1;
        m_center.y=x2;
        m_radius=r;
    }
float Circle::getPerimeter()
{
    float perimeter = m_radius * 2 * M_PI;
    return perimeter;
}
float Circle::getArea()
{
    float area = m_radius * m_radius * M_PI;
    return area;
}
std::string Circle::toString()
{
    std::string s="";
    s = s+'2'+ " " + std::to_string (m_center.x)+" "+ std::to_string (m_center.y) 
        + " " + std::to_string (m_radius) ;
    return s;
} 