#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"
#include <iostream>

using namespace std;

class Triangle
{
	private:
		Point p1;
		Point p2;
		Point p3;
		
	public:
    
		Triangle()
		{
		    cout << "Triangle default constructor called" << endl;
		};
	    
		Triangle(const Point& _p1, const Point& _p2, const Point& _p3)
		    :p1(_p1),p2(_p2),p3(_p3)
		{
		    cout << "Triangle second constructor called" << endl;
		};

			~Triangle();
		Triangle(const Triangle& rhs);// Copy Constructor
		Triangle& operator=(const Triangle& rhs);// Assignment operator

	    
		const Point& getP1() const;
		const Point& getP2() const;
		const Point& getP3() const;
	    
		Point getP1NoRef() const;

		void setP1(const Point& p1);
		void setP2(const Point& p2);
		void setP3(const Point& p3);
	    
		void setP1NoRef(Point p1);
	    
		void print() const;

};


#endif
