#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

class Shape
{
    public:
        Shape();
        virtual float GetPerimeter();
        virtual float GetArea();
        virtual void fromString(const std::string &s);
        virtual std::string toString();
        ~Shape();
};
#endif //SHAPE_H