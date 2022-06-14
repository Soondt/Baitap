#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

class Shape
{
    private:
    float x,y;
    public:
        Shape();
        virtual float GetPerimeter() = 0 ;
        virtual float GetArea() = 0 ;
        virtual void fromString(const std::string &s) = 0 ;
        virtual std::string toString() = 0;
        float Getx();
        float Gety();
        void Set(float x,float y);
        ~Shape();
};

Shape::Shape(){
    x = 0;
    y = 0;
}

Shape::~Shape()
{
    x = 0;
    y = 0;
}

float Shape::Getx()
{
    return x;
}

float Shape ::Gety()
{
    return y;
}

void Shape::Set(float x, float y)
{
    this ->x = x;
    this ->y = y ;
}
#endif