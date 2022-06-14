#ifndef GEOMETRY_H
#define GEOMETRY_H
#include "Shape.h"
#include <iostream>
#include<vector>
#include <fstream>
#include <sstream>
#include <math.h>

#define pi 3.14
class Geometry : public Shape
{
    private:
        Shape *sha;
        float width;
        float length;
    public:
        Geometry();
        void Set (float x, float y, float r, float d);
        float GetPerimeter(float width, float length);
        float GetPerimeter(float a, float b, float c);
        float GetPerimeter(float Radius);
        float GetPerimeter(int a, int b);
        float GetArea(float width, float length);
        float GetArea(float a, float b, float c);
        float GetArea(float Radius);
        void fromString(const std::string &s) ;
        std::string toString();
        ~Geometry();        
};

Geometry::Geometry()
{
    sha->Set(0,0);
    width = 0 ;
    length = 0;
}

void Geometry::Set (float x, float y, float r, float d)
{
    sha->Set(x, y);
    length = d;
    width = r;
}

void Geometry::fromString(const std::string &s)
{
    float s1,s2,s3,s4;
    std::stringstream ss(s);
    ss>>s1; ss.ignore(1, ' ');
    ss>>s2; ss.ignore(1, ' ');
    ss>>s3; ss.ignore(1, ' ');
    ss >>s4;

    this ->sha->Set(s1,s2);
    this ->width = s3;
    this ->length = s4;
}

std::string Geometry::toString()
{
    std:: string s1,s2,s3,s4;
    s1 = std::to_string(sha->Getx());
    s2 = std::to_string(sha->Gety());
    s3 = std::to_string(width);
    s4 = std::to_string(length);
    return "1 " + s1 + " " + s2 + " " + s3 + " " + s4;
}

float Geometry :: GetPerimeter(float width, float length)
{ 
    //Perimeter
    return 2*(width + length);
}

float Geometry :: GetPerimeter(float a, float b, float c)
{ 
    //Perimeter
    return (a + b + c);
}

float Geometry :: GetPerimeter(float Radius)
{ 
    //Perimeter
    return 2*pi*Radius;
}

float Geometry :: GetPerimeter(int a, int b)
{ 
    //Perimeter
    return 2*pi*sqrt((a*a + b*b)/2);
}

float Geometry::GetArea(float width, float length)
{
    //Area
    return width *length;
}

float Geometry::GetArea(float a, float b, float c)
{
    //Area
    float per = GetPerimeter(a,b,c);
    return sqrt(per*(per - a)*(per - b)*(per - c));
}

float Geometry::GetArea(float Radius)
{
    //Area
    return pi*Radius*Radius;
}

Geometry::~Geometry()
{
    width = 0 ;
    length = 0;    
}

#endif