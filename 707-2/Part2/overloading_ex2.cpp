#include <cstdlib>
#include <iostream>

#include "P2P_Addition.cpp"

using namespace std;

/* Overloading the built-in operators */

int main(int argc, char *argv[])
{
	P2P_Addition p1(1,2,3);
	P2P_Addition p2(4,5,6);

	/* TASK 1 = Overloading the << operator and + operator*/
	cout << "--------------------------------------" << endl;

    	cout << "TASK 1" << endl;
	cout << "The result of p1 + p2 = " << p1 + p2 << endl;

	cout << "--------------------------------------" << endl;
	
	P2P_Addition p3;

	/* TASK 2 = Overloading the assignment operator */
	cout << "TASK 2" << endl;

	p3 = p2;
	cout << "The values of p3 = " << p3 << endl;

	cout << "--------------------------------------" << endl; 

	
	/* TASK 3 = Overloading the ++ operator */
	cout << "TASK 3" << endl;

	++p3;
	cout << "The values of p3 after ++p3 = " << p3 << endl;

	cout << "--------------------------------------" << endl; 

	return 0;
}
