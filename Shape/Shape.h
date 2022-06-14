#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <math.h>

typedef struct Point
{
    float x;
    float y;
} Point_t;

class Shape{
    public:
    Shape();
    ~Shape();
    virtual float getPerimeter();
    virtual float getArea();
    virtual int fromString(const std::string &s);
    virtual std::string toString();
    float Distance(Point_t a, Point_t b);
    void inp_point(Point_t &a);
};
#endif // SHAPE