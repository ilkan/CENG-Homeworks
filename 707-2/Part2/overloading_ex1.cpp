#include <cstdlib>
#include <iostream>

using namespace std;


///////////////////////////////////////////////////////////////////////////////

/* TASK 1 and TASK 4 FUNCTIONS */

string add(string a, string b)
{
	return a + b;
}

int add(int a, int b)
{
	return a + b;
}

double add(double a, double b)
{
	return a + b;
}

float add(float a, float b)
{
	return a + b;
}

char add(char a, char b)
{
	return a + b;
}

/////////////////////////////////////////////////////////////////////////////

/* TASK 2 FUNCTIONS */

int add(int a, int b, int c)
{
	return a + b + c;
}

/////////////////////////////////////////////////////////////////////////////

/* TASK 3 FUNCTIONS */

int mul(int a, int b)
{
	return a * b;
}

//////////////////////////////////////////////////////////////////////////////

/* TASK 5 FUNCTIONS */

/*int add(float a, float b)
{
	return a + b;
}*/

/////////////////////////////////////////////////////////////////////////////

/* TASK 6 FUNCTIONS */

float mul(int a,float b)
{
	return a * b;
}

char mul(int a,double b)
{
	return a * b;
}

/////////////////////////////////////////////////////////////////////////////

int main(int argc, char *argv[])
{
        /* TASK 1 = overloading add function with different type parameters*/
	cout << "--------------------------------------" << endl;
    	cout << "TASK 1" << endl;

	cout << "The sum of integer 1 and 2 = " << add(1,2) << endl;
	cout << "The sum of double 2.1 and 3.2 = " << add(2.1,3.2) << endl;
	cout << "The sum of float 1.7 and 5.2 = " << add(1.7f,5.2f) << endl;
	cout << "The sum of char ' ' and '/' = " << add(' ','/') << endl; // ASCII: (32 + 47 = 79) = Big O 
	cout << "The sum of string A and B = " << add("A","B") << endl;

	cout << "--------------------------------------" << endl;

        /* TASK 2 = You can also overload same function with different # of parameters */
	cout << "TASK 2" << endl;

	cout << "The sum of integer 1 and 2 and 3 = " << add(1,2,3) << endl;

	cout << "--------------------------------------" << endl;

        /* TASK 3 = implicit casting performs */
	cout << "TASK 3" << endl;

 	cout << "The multiplication of integer 5 and 'A' = " << mul(5,'A') << endl;

	cout << "--------------------------------------" << endl;

        /* TASK 4 = implicit casting can not perform. Compiler can not choose the proper function */ 
 	/* Open and show the below codes one by one */       
        //cout << "The sum of integer 1 and double 2 = " << add(1,2.0) << endl; // Compile error. Too many choices
	//cout << "The sum of char 'a' and integer 1 = " << add('a',1) << endl; // Compile error. Too many choices

        /* TASK 5 = C++ does not overload the functions from the return type */
        /* Open the below code and Task 5 function and show the error */
        //cout << "The sum of float 1.7 and 5.2 = " << add(1.7f,5.2f) << endl;

	/* TASK 6 = The parameters can be in different types. (HOME TASK) */
        cout << "TASK 6" << endl;

 	cout << "The multiplication of integer 5 and float 3.2 = " << mul(5,3.2f) << endl;
	cout << "The multiplication of integer 13 and double 5.0 = " << mul(13,5.0) << endl;

	cout << "--------------------------------------" << endl;

	// TIP = You can also overload the functions of classes
	
	return 0;
}
