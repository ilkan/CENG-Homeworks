#ifndef _DividedByZeroException_H_
#define _DividedByZeroException_H_

#include <stdexcept> //contains runtime_error
 
class DividedByZeroException : public std::runtime_error
{
	public:
	// constructor specifies default error message
	DividedByZeroException() : std::runtime_error( "Divided By Zero Error (From inherited class)" ) {}
};


#endif
