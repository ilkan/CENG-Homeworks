#include <cstdlib>
#include <iostream>
#include "Array.cpp"

using namespace std;

/* CLASS TEMPLATES with built-in parameter*/

int main(int argc, char *argv[])
{
    /* TASK 1 (HOME TASK) */
    ArrayContainer <int,5> intArray;
    
    intArray.set(1,5);
    intArray.set(2,8);
    intArray.set(3,7.8);
    intArray.set(4,'a');

    cout << "-------------" << endl;
    cout << "TASK 1" << endl;

    cout << intArray.get(2) << endl;
    cout << intArray.get(3) << endl;
    cout << intArray.get(4) << endl;

    cout << "-------------" << endl;

    /* TASK 2 (HOME TASK) */
    ArrayContainer <float,10> flArray;

    flArray.set(5,3.7f);
    flArray.set(7,2.5f);
    flArray.set(8,'a');;
  
    cout << "TASK 2" << endl;

    cout << flArray.get(5) << endl;
    cout << flArray.get(7) << endl;

    cout << "-------------" << endl;

    /* TASK 3 (HOME TASK) */
    //ArrayContainer <float,10.5> array; // Can not convert. Compile Error.

    return 0;
}
