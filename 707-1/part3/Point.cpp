#include "Point.h"
#include <iostream>

using namespace std;


Point::Point()
{
    cout << "Point Default Constructor is called" << endl;
	this->x = 0;
	this->y = 0;
}

Point::Point(int _x, int _y)
{
    cout << "Point Constructor 2 called" << endl;
 	this->x = _x;
	this->y = _y;
}

Point::~Point()
{
    cout << "Point Destructor is called" << endl;
}

Point::Point(const Point& rhs)
{
    cout << "Point Copy constructor called" << endl;
	this->x = rhs.x;
	this->y = rhs.y;
}

Point& Point::operator=(const Point& rhs)
{
    cout << "Point Assignment operator called" << endl;
	this->x = rhs.x;
	this->y = rhs.y;
	return (*this);
}

int Point::getX() const
{
	return this->x;
}

int Point::getY() const
{
	return this->y;
}

void Point::setX(int _x)
{
	this->x = _x;
}

void Point::setY(int _y)
{
	this->y = _y;
}

void Point::print() const
{
    cout << "( " << this->getX() << "," << this->getY() << " )" << endl;
}

