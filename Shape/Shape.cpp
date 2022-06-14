#include "Shape.h"

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