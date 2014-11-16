#include <iostream>
#include <math.h>

#include "Point.h"
#include "Triangle.h"

using namespace std;

void task1(){
    cout << "**********************" << endl;
    cout << "Entering task1 function" << endl;
    Point a;
    Point b(1,2);
    
    cout << "a:(" << a.getX() << "," << a.getY() << ")"<<  endl;
    cout << "b:(" << b.getX() << "," << b.getY() << ")"<<  endl;

    cout << "Exiting task1 function" << endl;
    cout << "**********************" << endl;
    return;
}


void task2(){
    cout << "**********************" << endl;
    cout << "Entering task2 function" << endl;
    Point a(2,3);
    Point b(a);
    
    cout << "a:(" << a.getX() << "," << a.getY() << ")"<<  endl;
    cout << "b:(" << b.getX() << "," << b.getY() << ")"<<  endl;
    
    cout << "Exiting task2 function" << endl;
    cout << "**********************" << endl;
    return;
}

void task3(){
    
    cout << "**********************" << endl;
    cout << "Entering task3 function" << endl;
    Point a(3,4);
    Point b = a;
    
    cout << "a:(" << a.getX() << "," << a.getY() << ")"<<  endl;
    cout << "b:(" << b.getX() << "," << b.getY() << ")"<<  endl;
    
    cout << "Exiting task3 function" << endl;
    cout << "**********************" << endl;

}

void task4(){
    // Compare output with Task 3!
    cout << "**********************" << endl;
    cout << "Entering task4 function" << endl;
    Point a(4,5);
    Point b;

    b = a;
    
    cout << "a:(" << a.getX() << "," << a.getY() << ")"<<  endl;
    cout << "b:(" << b.getX() << "," << b.getY() << ")"<<  endl;
    
    cout << "Exiting task4 function" << endl;
    cout << "**********************" << endl;
    
}

void task5(){
    
    // How many times is the Point destructor called?
    cout << "**********************" << endl;
    cout << "Entering task5 function" << endl;
    
    Point* a = new Point(5,6);
    Point* b = new Point(7,8);
    
    cout << "a:(" << a->getX() << "," << a->getY() << ")"<<  endl;
    cout << "b:(" << b->getX() << "," << b->getY() << ")"<<  endl;

    delete a;
    cout << "Exiting task5 function" << endl;
    cout << "**********************" << endl;
    
}

void task6(){
    
    // How many times is the Point destructor called?
    // Which Point constructor is called?
    
    cout << "**********************" << endl;
    cout << "Entering task6 function" << endl;
    
    Point pointArray[5];
    
    for (int i = 0; i<5; i++){
        cout << "pointArray[" << i << "]:(" << pointArray[i].getX() << "," << pointArray[i].getY() << ")"<<  endl;
 
    }
    
    cout << "Exiting task6 function" << endl;
    cout << "**********************" << endl;
    
}

void task7(){
    
    // How many times is the Point destructor called?
    cout << "**********************" << endl;
    cout << "Entering task7 function" << endl;
    
    Point* pointArray = new Point[5];
    
    for (int i = 0; i<5; i++){
        cout << "pointArray[" << i << "]:(" << pointArray[i].getX() << "," << pointArray[i].getY() << ")"<<  endl;
        
    }
    
    // delete[] pointArray; // TASK 8: uncomment this line.
    
    cout << "Exiting task7 function" << endl;
    cout << "**********************" << endl;
    
}


int main()
{
    // Note that Point class is updated. Copy constructor, an assignment operator and a destructor definition added.
    
    // While performing the tasks in this part,
    // examine the console output carefully
    // with the following questions in mind:
    // Which constructor is called?
    // When is a destructor called?
    // When is a copy constructor is called?
    // When is a an assignment operator is called?

    
    
    cout << "Entering main" << endl;
    
    task1(); // TASK 1: uncomment this line, recompile and run.
    task2(); // TASK 2: uncomment this line, recompile and run.
    task3(); // TASK 3: uncomment this line, recompile and run.
    task4(); // TASK 4: uncomment this line, recompile and run.
    task5(); // TASK 5: uncomment this line, recompile and run.
    task6(); // TASK 6: uncomment this line, recompile and run.
    task7(); // TASK 7: uncomment this line, recompile and run.

    cout << "Exiting main" << endl;
    return 0;

}
