#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "../Shape/Shape.h"
#include "../Shape/Shape.cpp"

class Ellipse : public Shape
{
private:
    Point_t m_center;
    float m_x;  //ban kinh duong tron nho
    float m_y;  //ban kinh duong tron lon

public:
    Ellipse(float x1, float x2, float x3, float x4);
    float getPerimeter();
    float getArea();
    std::string toString();
};
#endif  //ELLIPSE_H