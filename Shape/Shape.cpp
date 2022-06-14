#include "Shape.h"

float Shape::getPerimeter()
{
    // do something
}

float Shape::getArea()
{
    // do something
}

std::string Shape::toString()
{
    // do something
}

int Shape::fromString(const std::string &s)
{
    // do something
}

float Shape::Distance(Point_t a, Point_t b)
{
    return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}

void Shape::inp_point(Point_t &a)
{
    std::cout<< "_x = ";
    std::cin >> a.x;
    std::cout << "_y = ";
    std::cin >> a.y;
}