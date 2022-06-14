#ifndef CIRCLE_H
#define CIRCLE_H
#include "../Shape/Shape.h"
#include "../Shape/Shape.cpp"

class Circle : public Shape
{
private:
    Point_t m_center;
    float m_radius;
public:
    Circle(float x1, float x2, float r);
    float getPerimeter();
    float getArea();
    std::string toString();
};
#endif  //CIRCLE_H