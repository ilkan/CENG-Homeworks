#include <cstdlib>
#include <iostream>
#include <vector>
#include <stdexcept>    // std::out_of_range
#include <new>          // std::bad_array_new_length
#include "DividedByZeroException.h" // Inherited user-defined exception class
#include "MyException.h" // Our custom exception class

using namespace std;


void task1()
{
	vector<int> myvector(10);
	myvector.at(11) = 11;
}

void task2()
{
	int *array = new int[-1];
}

int task3()
{
	int numerator = 5;
	int denominator = 0;
	
	if(denominator == 0)
		throw "Divided By Zero Error";
	
	return numerator/denominator;
}

int task4()
{
	int numerator = 5;
	int denominator = 0;
	
	if(denominator == 0)
		throw DividedByZeroException();
	
	return numerator/denominator;
}

void task5()
{
	bool myError = true;

	if(myError)
		throw MyException();
}


int main(int argc, char *argv[])
{
	/* TASK 1 = Built-in Exception Class (Out of Range Exception) */
	try
	{
		task1();
		
	}
	catch(const std::out_of_range& oor)
	{
		cout << "--------------------------------------" << endl;
    		cout << "TASK 1" << endl;

		cerr << "Out of Range error: " << oor.what() << endl;

		cout << "--------------------------------------" << endl;
	}
	
	/* TASK 2 = Built-in Exception Class (Bad Allocation Exception) */
	try
	{
		task2();
		
	}
	catch(const std::bad_alloc& ba)
	{
		cout << "TASK 2" << endl;

		cerr << "Bad Allocation error: " << ba.what() << endl;

		cout << "--------------------------------------" << endl;
	}

	/* TASK 3 = Simple custom exception by throwing a message as a string */
	try
	{
		task3();
	}
	catch(const char* message)
	{
		cout << "TASK 3" << endl;

		cout << "Exception Message = " << message << endl;

		cout << "--------------------------------------" << endl;
	}

	/* TASK 4 = New exception class which is inherited from built-in exception class */
	try
	{
		task4();
	}
	catch(const DividedByZeroException &dbze)
	{
		cout << "TASK 4" << endl;

		cout << "Exception Message = " << dbze.what() << endl;

		cout << "--------------------------------------" << endl;
	}

	/* TASK 5 = New custom exception class */
	try
	{
		task5();
	}
	catch(const MyException &me)
	{
		cout << "TASK 5" << endl;

		cout << "Exception Message = " << me.show() << endl;

		cout << "--------------------------------------" << endl;
	}

	/* TASK 6 = More than one catch example (HOME TASK) */
	cout << "TASK 6" << endl;

	try
	{
		task2();
	}
	catch(const std::out_of_range& oor)
	{
		cerr << "Out of Range error: " << oor.what() << endl;
	}
	catch(const std::bad_alloc& ba)
	{
		cerr << "Bad Allocation error: " << ba.what() << endl;
	}

	cout << "--------------------------------------" << endl;


}
