#ifndef POINT_CPP
#define POINT_CPP

#include "Point.h"

Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(int _x, int _y)
{
	this->x = _x;
	this->y = _y;
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

#endif