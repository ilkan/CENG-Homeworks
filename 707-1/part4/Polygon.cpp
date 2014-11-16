#include "Polygon.h"
#include <iostream>

using namespace std;

Polygon::Polygon(int _dimension, Point* _pointSequence){
    cout << "Polygon constructor called" << endl;
    this->dimension = _dimension;
    this->pointSequence = _pointSequence;
}

Polygon::~Polygon(){
    
    cout << "Polygon destructor called"<<endl;
    if (NULL != this->pointSequence)
        delete[] this->pointSequence;
}

Polygon::Polygon(const Polygon& rhs){
   
    cout << "Polygon copy constructor called" << endl;
    
    this->dimension = rhs.getDimension();
    this->pointSequence = rhs.getPointSequence();
    
    // TASK 3 SOLUTION: Uncomment the code block below
    this->pointSequence = new Point[this->dimension];
    const Point* rhsPointSequence = rhs.getPointSequence();
    for (int i = 0; i< dimension; i++){
        this->pointSequence[i] = rhsPointSequence[i];
    }
    
}

int Polygon::getDimension() const
{

    return this->dimension;
    
}
void Polygon::setDimension(int x)
{
    this->dimension = x;
}

Point* Polygon::getPointSequence() const {
    return this->pointSequence;
    
}
void Polygon::setPointSequence(Point* pointSequence){
    this->pointSequence = pointSequence;
}


void Polygon::changePoint(int pointIndex, const Point& newPoint ){
    this->pointSequence[pointIndex] = newPoint;
}

void Polygon::print() const{
    for (int i = 0; i< this->dimension; i++){
        cout <<  "(" << this->pointSequence[i].getX() <<  "," << this->pointSequence[i].getY() << ") ";
    }
    
    cout << endl;
    
}
