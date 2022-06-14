#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

#include "../Shape/Shape.h"
#include "../Triangle/Triangle.h"
#include "../Circle/Circle.h"
#include "../Ellipse/Ellipse.h"
#include "../Rectangle/Rectangle.h"
#include <list>
#include <fstream>
class ShapeFactory
{
public:
    Shape* createShape(int type,const string &s);
    list<Shape*> readShapesFromFile(const string &filename);
    void saveShapesToFile(const string &filename, const list<Shape*> &shapes);
};
#endif  //SHAPEFACTORY_H