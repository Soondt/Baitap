#ifndef POINT_H
#define POINT_H

typedef struct
{
	int x, y;
}coordinates;

class Point
{
private:
	coordinates p;
public:
	coordinates m_coordinates;
	Point();
	Point(const Point&);
	~Point();
	void setCoordinates(int , int);
	coordinates getCoordinates();
	int getCoordinatesX();
	int getCoordinatesY();
	double distance(coordinates);	// khoang cach diem tu toa do A(x,y) den toa do B(x,y)
	double distance(Point, Point);	// khoang cach giua 2 diem p1 va p2
	double dotProduct(coordinates, coordinates, coordinates);	// tinh tich vo huong khi biet 3 diem
	double dotProduct(Point, Point, Point);
};
#endif //POINT_H