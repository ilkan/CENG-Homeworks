#include <cstdlib>
#include <iostream>
#include <vector>
#include "Point.cpp"

using namespace std;

int main(int argc, char *argv[])
{
	/* TASK 1 = Declaration of vector with Point class type */
	Point<int> _p1(3,5);
	Point<int> _p2(2,4);

	vector< Point<int> > p1;
	p1.push_back(_p1);
	p1.push_back(_p2);

	cout << "--------------------------------------" << endl;
    	cout << "TASK 1" << endl;

	cout << "Index 0 of p1 = (" << p1[0].getX() << "," << p1[0].getY() << ")" << endl;
	cout << "Index 1 of p1 = (" << p1[1].getX() << "," << p1[1].getY() << ")" << endl;
	cout << "Size of p1 = " << p1.size() << endl;

	cout << "--------------------------------------" << endl;

	/* TASK 2 = Another Declaration of vector with Point class type */
	/* Vector with size 2 and without initialization.*/
	/* TIP = To do this, we need default constructor of Point class !! */
	vector< Point<int> > p2(2);

	cout << "TASK 2" << endl;

	cout << "Index 0 of p2 = (" << p2[0].getX() << "," << p2[0].getY() << ")" << endl;
	cout << "Index 1 of p2 = (" << p2[1].getX() << "," << p2[1].getY() << ")" << endl;
	cout << "Size of p2 = " << p2.size() << endl;

	cout << "--------------------------------------" << endl;

	/* TASK 3 = Another Declaration of vector with Point class type */
	/* Vector with size 2 and initialize with _p1.*/
	vector< Point<int> > p3(2,_p1);

	cout << "TASK 3" << endl;

	cout << "Index 0 of p3 = (" << p3[0].getX() << "," << p3[0].getY() << ")" << endl;
	cout << "Index 1 of p3 = (" << p3[1].getX() << "," << p3[1].getY() << ")" << endl;
	cout << "Size of p3 = " << p3.size() << endl;

	cout << "--------------------------------------" << endl; 

	/* TASK 4 = Built-in assignment operator */
	p3 = p1;

	cout << "TASK 4" << endl;

	cout << "Index 0 of p3 = (" << p3[0].getX() << "," << p3[0].getY() << ")" << endl;
	cout << "Index 1 of p3 = (" << p3[1].getX() << "," << p3[1].getY() << ")" << endl;
	cout << "Size of p3 = " << p3.size() << endl;

	cout << "--------------------------------------" << endl;

	/* TIP = If you define as "vector<Point<int>> p1;", you will get compile error, because of the ambiguity of ">>" operator. */
	
	

}
