#ifndef TRIANGLE_CPP
#define TRIANGLE_CPP

#include "Triangle.h"
#include <iostream>

using namespace std;



Triangle::~Triangle(){
    cout << "Triangle destructor is called" << endl;
}


Triangle::Triangle(const Triangle& rhs) // Copy Constructor
{
   cout << "Triangle copy constructor is called" << endl;
}

Triangle& Triangle::operator=(const Triangle& rhs) // Assignment operator
{
    cout << "Triangle assignment operator is called" << endl;
  return *this;

}



const Point& Triangle::getP1() const{
    return p1;
}

const Point& Triangle::getP2() const{
    return p2;
}

const Point& Triangle::getP3() const{
    return p3;
}

Point Triangle::getP1NoRef() const{
    return p1;
}


void Triangle::setP1(const Point& _p1){
    this->p1 = _p1;

}

void Triangle::setP2(const Point& _p2){
    this->p2 = _p2;
}

void Triangle::setP3(const Point& _p3){
    this->p3 = _p3;
}

void Triangle::setP1NoRef(Point p1){
    this->p1 = p1;
}

void Triangle::print() const{
    cout << "(" << this->p1.getX() << "," << this->p1.getY() << ") " ;
    cout << "(" << this->p2.getX() << "," << this->p2.getY() << ") " ;
    cout << "(" << this->p3.getX() << "," << this->p3.getY() << ") " ;
    cout << endl;
    
}
#endif
