#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "../Shape/Shape.h"
#include "../Shape/Shape.cpp"
#include <math.h>

class Rectangle : public Shape
{
    private:
        Point_t a, b, c;
    public:
        float getPerimeter();
        float void getArea();
        std::string toString();
};

#endif //RECTANGLE_H