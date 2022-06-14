#include "Triangle.h"

float Triangle::getPerimeter()
{
    do
    {
        kt = 0;
        float ab, ac, bc;
        std::cout << "\tnhap diem A:\n";
        inp_point(a)
        std::cout<< "\tnhap diem B:\n";
        inp_point(b)
        std::cout<< "\tnhap diem c:\n";
        inp_point(c)

        ab = Distance(a, b);
        ac = Distance(a, c);
        bc = Distance(b, c);

        if (ab + ac <= bc || ab + bc <= ac || ac + bc <= ab)
        {
            std::cout << "\n3 diem khong tao thanh am giac!----------- nhap lai!-----------\n\n";
            kt = 1;
        }
    } while (kt);
    return ab + ac + bc;
}

float Triangle::getArea()
{
    return abs((b.x - a.x)(c.y - a.y) - (c.x - a.x)(b.y - a.y)) / 2;
}

std::string Triangle::toString()
{
    std::string s="";
    s = s+'0'+ " " + std::to_string (m_P1.x)+" "+ std::to_string (m_P1.y) 
        + " " + std::to_string (m_P2.x) + " " + std::to_string (m_P2.y) 
        + " " + std::to_string (m_P3.x) + " " + std::to_string (m_P3.y);
    return s;
} 
