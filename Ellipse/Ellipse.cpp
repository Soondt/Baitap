#include "Ellipse.h"
#include <math.h>

Ellipse::Ellipse(float x1, float x2, float x3, float x4)
    {
        m_center.x=x1;
        m_center.y=x2;
        m_x=x3;
        m_y=x4;
    }
float Ellipse::getPerimeter()
{
    float perimeter = M_PI * (3 * (m_x + m_y) - sqrt((3 * m_x + m_y) * (m_x + 3 * m_y)));
    return perimeter;
}
float Ellipse::getArea()
{
    float area = m_x * m_y * M_PI;
    return area;
}
std::string Ellipse::toString()
{
    std::string s="";
    s = s+'3'+ " " + std::to_string (m_center.x)+" "+ std::to_string (m_center.y) 
        + " " + std::to_string (m_x) + " " + std::to_string (m_y) ;
    return s;
} 
