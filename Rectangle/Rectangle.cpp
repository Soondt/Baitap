#include "Rectangle.h"

float Rectangle::getPerimeter()
{
    float ab,ac;
    std::cout<< "nhap diem A:\n";
    inp_point(a)
    std::cout<< "nhap diem B:\n";
    inp_point(b)
    std::cout<< "nhap diem c:\n";
    inp_point(c)

    ab = Distance(a,b);
    ac = Distance(a,c);

    return 2*(ab + ac);
}

float Rectangle::void getArea()
{
    float ab,ac;
    ab = Distance(a,b);
    ac = Distance(a,c);

    return ab * ac;
}

std::string Rectangle::toString()
{
    std::string s="";
    s = s+'1'+ " " + std::to_string (m_center.x)+" "+ std::to_string (m_center.y) 
        + " " + std::to_string (m_width) + " " + std::to_string (m_height) ;
    return s;
} 
