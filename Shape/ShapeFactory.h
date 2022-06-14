#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H
#include <iostream>
#include "Shape.h"
#include "Geometry.h"
#include <list>
#include <fstream>
class ShapeFactory : public Shape
{
private:
    /* data */
public:
    ShapeFactory();

    Shape* ShapeFactory::creatShape(int x, const std::string& s1);
    std::list<Shape*> ShapeFactory::readShapesFromFile(const std::string& s_name);
    void ShapeFactory::saveShapesToFile(const std::string& filename, const std::list<Shape*>& shape);

    ~ShapeFactory();
};

void ShapeFactory :: Shape* createShape(int x, const std::string &s)
{
    // create kieu shape   
	json jD;
	if (x == 0) // tao 1 tam giac
	{
		Geometry *tg=new Geometry;
		tg->fromString(s1);
		return tg;
	}
	else if (x == 1)
	{
		Geometry *tg=new Geometry;
		rec->fromString(s1);
		return rec;
	}
	else if (x == 2)
	{
		Geometry *tg=new Geometry;
		cir->fromString(s1);
		return cir;
	}
	else if (x == 3)
	{
		Ellipse *ellip=new Ellipse;
		ellip->fromString(s1);
		return ellip;
	}
	else
	{
		cout << " data ko phu hop" << endl;
		return nullptr;
	}
}

void ShapeFactory::list<Shape*> readShapesFromFile(const std::string &filename);
{
    // read file ghi vao list
	char ch;	int t;
	ifstream x(filename, ios::in);
	std::list <Shape*> listShape;
	json j;
	Shape* pShape;
	while (!x.eof())
	{
		string str;
		x >> str;
		if (str == "") { continue; }
		j = json::parse(str);

		t = j["Shape"].get<int>();

		pShape = creatShape(t, str);
		listShape.push_back(pShape);

		str = "";
		j.clear();
	}
	x.close();
	return listShape;
}

void ShapeFactory :: saveShapesToFile(const std::string &filename, const std::list<Shape*> &shapes)
{
    std::list<Shape*> copyListShape(shape);
	fstream f;
	f.open("my_document.txt", ios::app);
	for (list<Shape*>::iterator it = copyListShape.begin(); it != copyListShape.end(); ++it)
	{
		cout << "---------------" << endl;
		string data = (*it)->toString();
		cout << (*it)->toString() << endl;
		data += "\n";
		f << data;
		data = "";
	}
	f.close();
	cout << "da ghi thanh cong" << endl;
}
#endif