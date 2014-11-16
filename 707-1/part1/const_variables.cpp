#ifndef CENG_213_REC1_CONST_VARIABLES
#define CENG_213_REC1_CONST_VARIABLES

#include <iostream>
using namespace std;


int main()
{
    
	// TIP 1: Const qualifier means ' you can assign a const variable only once where you declare
	// TIP 2: Const qualifier scope is left side of the const keyword
    	// TIP 3: You have to assign a value to const variable where you declaere it.
	////////////////////////////////////////////////////////////////////////
	//An int which can't change value.
   int const constInt = 1; // TASK 1 comment this line and uncomment the line below
    
	//int const constInt= 11;
    
	//constInt = 11;  // TASK 2: Uncomment this line and recompile this line.
    
	cout << "constInt: " << constInt << endl;

	////////////////////////////////////////////////////////////////////////
	
	int const * ptrToConstInt1 = new int(2); // same as const int *
	
   //*ptrToConstInt1 = 12;  //TASK 3: Uncomment this line and recompile.
	//ptrToConstInt1 = new int(12); //TASK 4: Uncomment this line and recompile.
	
	cout << "ptrToConstInt1 Content: " << *ptrToConstInt1 << endl;

	/////////////////////////////////////////////////////////////////////////
	
	int * const constPtrToInt = new int;
	*constPtrToInt = 3; 
    
	//constPtrToInt = new int(17); // TASK 5: uncomment this line and recompile.
    
	cout << "constPtrToInt Content: " << *constPtrToInt << endl;
    
	////////////////////////////////////////////////////////////////////////////

	int const * const constPtrToConstInt1 = new int(4); // same as const int * const
	
	//constPtrToConstInt1 = 13;  //TASK 6: Uncomment this line and recompile.
	//constPtrToConstInt1 = new int(13); //TASK 7: Uncomment this line and recompile.
    
   	cout << "constPtrToConstInt1 Content: " << *constPtrToConstInt1 << endl;

	///////////////////////////////////////////////////////////////////////////
	
	//TIP: A declaration of a const reference is redundant since references can never be made to refer to another object.
    
	int i = 5;
    
	int const & refToConst = i;
    
	//refToConst = 16; // TASK 8: Uncomment this line
    
	//int & const constRef = i; // TASK 9: Uncomment this line

	cout << "refToConst: " << refToConst << endl;
    
	/////////////////////////////////////////////////////////////////////////////
    
	const int *ptrToConstInt2 = new int(6); // same as int *const
	
	//*ptrToConstInt2 = 13;  //TASK 10: Uncomment this line and recompile.
	
	//ptrToConstInt2 = new int(13); //TASK 11: Uncomment this line and recompile.
	
	cout << "ptrToConstInt2 Content: " << *ptrToConstInt2 << endl;
    
    
	/////////////////////////////////////////////////////////////////////////////
    
	const int * const constPtrToConstInt2 = new int(7); // same as int const * const
    
	//*constPtrToConstInt2 = 15;  //TASK 12: Uncomment this line and recompile.
    
	//constPtrToConstInt2 = new int(15); //TASK 13: Uncomment this line and recompile.
	
	cout << "constPtrToConstInt2 Content: " << *constPtrToConstInt2 << endl;
    
    
	///////////////////////////////////////////////////////////////////////////
    
 	return 0;
}

#endif
