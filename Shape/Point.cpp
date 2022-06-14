#include "Point.h"

Point::Point()
{
	p.x = p.y = 0;
}
Point::Point(const Point& a)
{
	p.x = a.p.x;
	p.y = a.p.y;
}

Point::~Point()
{
}

void Point::setCoordinates(int x, int y)
{
	p.x = x;
	p.y = y;
}

int Point::getCoordinatesX()
{
	return p.x;
}

int Point::getCoordinatesY()
{
	return p.y;
}

coordinates Point::getCoordinates()
{
	return p;
}

double Point::distance(coordinates a)
{
	double kq;
	kq = sqrt(pow(p.x - a.x, 2) + pow(p.y - a.y, 2));
	return kq;
}

double Point::distance(Point a, Point b)
{
	double kq;
	kq = sqrt(pow(a.p.x - b.p.x, 2) + pow(a.p.y - b.p.y, 2));
	return 0.0;
}

double Point::dotProduct(coordinates a , coordinates b , coordinates c)
{
	coordinates vt1, vt2;
	vt1 = { 0,0 };	vt2 = { 0,0 };
	vt1.x = b.x - a.x;	vt1.y = b.y - a.y;
	vt2.x = b.x - a.x;	vt2.y = b.y - a.y;

	return (vt1.x*vt2.x + vt1.y*vt2.y);
}

double Point::dotProduct(Point a, Point b, Point c)
{
	coordinates vt1, vt2;
	vt1 = { 0,0 };	vt2 = { 0,0 };
	vt1.x = b.p.x - a.p.x;	vt1.y = b.p.y - a.p.y;
	vt2.x = b.p.x - a.p.x;	vt2.y = b.p.y - a.p.y;
	return (vt1.x * vt2.x + vt1.y * vt2.y);
}

