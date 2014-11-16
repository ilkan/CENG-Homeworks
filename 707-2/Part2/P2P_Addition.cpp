#include <cstdlib>
#include "P2P_Addition.h"

using namespace std;

P2P_Addition::P2P_Addition()
{
	x = 0;
	y = 0;
	z = 0;
}

P2P_Addition::P2P_Addition(int xval, int yval, int zval)
{
	x = xval;
	y = yval;
	z = zval;
}

P2P_Addition P2P_Addition::operator+(const P2P_Addition& rhs)const
{
          P2P_Addition temp_class;
          
          temp_class.x = x + rhs.x;
          temp_class.y = y + rhs.y;
	  temp_class.z = z + rhs.z;
	  
          return temp_class;
}


P2P_Addition& P2P_Addition::operator=(const P2P_Addition& rhs)
{
	  x = rhs.x;
          y = rhs.y;
	  z = rhs.z;
          
          return *this;
}


ostream& operator<< (ostream &out, P2P_Addition cP2P_Addition)
{
	  out << "(" << cP2P_Addition.x << ", " <<         cP2P_Addition.y <<  ", " << cP2P_Addition.z << ")";     
          
	  return out;
}

P2P_Addition& P2P_Addition::operator++()
{
	++x;
	++y;
	++z;

	return *this;
}

