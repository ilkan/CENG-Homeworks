#ifndef POLYGON_H
#define POLYGON_H

#include "Point.h"

class Polygon
{
	private:
        Point * pointSequence;
		int dimension;

    public:
        Polygon():dimension(0),pointSequence(0){};
		Polygon(int _dimension, Point* _pointSequence);// Second Constructor
    
        ~Polygon();
    
		Polygon(const Polygon& rhs);// Copy Constructor
		Polygon& operator=(const Polygon& rhs);// Assignment operator

		int getDimension() const;
        void setDimension(int x);
		
        Point* getPointSequence() const;
		void setPointSequence(Point* pointSequence);
    
        void changePoint(int pointIndex, const Point& newPoint );
    
        void print() const;

};


#endif
