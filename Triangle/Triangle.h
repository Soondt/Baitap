#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include "../Shape/Shape.h"
#include "../Shape/Shape.cpp"
#include <math.h>

class Triangle : public Shape
{
    private:
    Point_t m_P1, m_P2, m_P3;
    public:
    float getPerimeter();
    float getArea();
    std::string toString();
};
#endif //TRIANGLE_H