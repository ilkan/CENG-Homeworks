#ifndef _P2P_Addition_H_
#define _P2P_Addition_H_

#include <iostream>
using namespace std;

class P2P_Addition
{
	public:
                P2P_Addition();
		P2P_Addition(int xval, int yval, int zval);
		P2P_Addition operator+(const P2P_Addition& rhs)const; // Overloading addition
		P2P_Addition& operator=(const P2P_Addition& rhs); // Overloading assignment 
		friend ostream& operator<< (ostream &out, P2P_Addition cP2P_Addition); // Overloading << 
                P2P_Addition& operator++(); // Overloading ++
		
	private:
		int x;
		int y;
		int z;
};
#endif
