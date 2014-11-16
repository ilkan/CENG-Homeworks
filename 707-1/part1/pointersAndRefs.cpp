#ifndef CENG213_RECITATION1_PART1
#define CENG213_RECITATION1_PART1

#include <iostream>
using namespace std;



int main(){
    
    // NOTICE: Whenever you get compile error after performing the task,
    // undo the action before moving to the next task!!
    
    //////////////////////////////////////////////////////
    // dynamic memory allocation
    // instead of malloc and free, we have new and delete. Cooler syntax!
    // TASK 0: Examine the four lines of code below
    int* size = new int(5);
    int* intArray = new int[*size];
    
    delete size;
    delete intArray;
    
    //////////////////////////////////////////////////////
    // references.
    
    cout << "Reference Usage Examples" << endl;

    int x = 2;
    int a = 6;
    int& refToA = a; 
    
  refToA++; // TASK 1 Uncomment this line.
    
   //int& refToX = NULL; // TASK 2:Uncomment this line.
    
   //int& refToX; // TASK 3:Uncomment this line.
    
   refToA = x; // TASK 4:Uncomment this line
    
    a++;
    
    cout << "a: " << a << endl;
    cout << "refToA: " << refToA << endl;
    cout << "x: " << x << endl;
    
    
    //////////////////////////////////////////////////////

    
}

#endif
