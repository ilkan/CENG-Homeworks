#include "Point.h"
#include <iostream>
#include <math.h>

using namespace std;


double computeDistance(const Point& point1,const Point& point2)
{
	// implements euclidean distance formula
	int xdiff = point1.getX() - point2.getX();
	int ydiff = point1.getY() - point2.getY();
	return sqrt(xdiff*xdiff + ydiff*ydiff);
}


int main()
{
	// TASK 0: Observe that Point.h is included!! Examine the file Point.h
	
	// Compile with g++ part1.cpp Point.cpp -o part1

   	Point p1;
    	const Point p2(8,0);
    
	p1.x = 2; // TASK 1: Uncomment this line. Identify the cause of the compile error.

	// TASK 2: Edit the two lines below so that the program prints p1 in (X,Y) format.
 	
	  cout << "p1: (" <<p1.getX()<< p1.getY()<<")" << endl;
	  cout << "p2: (" << p2.getX()<< p2.getY()<< ")" << endl;
    
	p1.setX(4);
    
    	// TASK 3:Uncomment the twolines below this line and identify the cause of the compile time 		error. Why cannot we call setX but can call getX() on p2 instance.
    
    	p1.setX(8);
    	p1.setY(6);
    	
    	
    	// TASK 4: Write code which prints the distance between two points to the console.
    	
    cout << "Distance= " << computeDistance(p1,p2) << endl;
    
    return 0;

}
