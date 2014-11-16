#include <iostream>
#include <math.h>

#include "Point.h"
#include "Polygon.h"

using namespace std;


void task1(){
    
    // Point instances are deleted although there is no delete statement in this function!
    
    cout << "**********************" << endl;
    cout << "Entering task1 function" << endl;
    
    Point * points = new Point[4];
    
    cout << "Point sequence created " << endl;
    
    points[0].setX(0);
    points[0].setY(0);
    
    points[1].setX(0);
    points[1].setY(5);
    
    points[2].setX(5);
    points[2].setY(5);
    
    points[3].setX(5);
    points[3].setY(0);
    
    Polygon p(4,points);
    
    p.print();
    
    cout << "Exiting task1 function" << endl;
    cout << "**********************" << endl;
    return;
}


void task2(){

    // Why does the changes to p1 is reflected to p2?
    // What is the difference between triangle and polygon?
    
    // Why does the code generate the runtime error?
    
    // Hint: Refer to the Shallow vs Deep copy in the lecture slides.
    
    cout << "**********************" << endl;
    cout << "Entering task2 function" << endl;
    
    Point * points = new Point[4];
    
    cout << "Point sequence created " << endl;
    
    points[0].setX(0);
    points[0].setY(0);
    
    points[1].setX(0);
    points[1].setY(5);
    
    points[2].setX(5);
    points[2].setY(5);
    
    points[3].setX(5);
    points[3].setY(0);
    
    Polygon g1(4,points);
    Polygon g2(g1);
    
    g1.print();
    g2.print();
    
    
    g1.changePoint(2,Point(4,0));
    
    g1.print();
    g2.print();
    
    cout << "Exiting task2 function" << endl;
    cout << "**********************" << endl;
    return;
}


void task4(){
    
    // The same problem with the problem in Task 3

    cout << "**********************" << endl;
    cout << "Entering task4 function" << endl;
    
    Point * points = new Point[4];
    
    cout << "Point sequence created " << endl;
    
    points[0].setX(0);
    points[0].setY(0);
    
    points[1].setX(0);
    points[1].setY(5);
    
    points[2].setX(5);
    points[2].setY(5);
    
    points[3].setX(5);
    points[3].setY(0);
    
    Polygon g1(4,points);
    Polygon g2;
    
    g2 = g1;
    
    g1.print();
    g2.print();
    
    
    g1.changePoint(2,Point(4,0));
    
    g1.print();
    g2.print();
    
    cout << "Exiting task4 function" << endl;
    cout << "**********************" << endl;
    return;
}


int main()
{
    
    cout << "Entering main" << endl;
    task1(); // TASK 1: uncomment this line, recompile and run.
    task2(); // TASK 2: uncomment this line, recompile and run. Identify the cause of the runtime error!!
    
    // TASK 3: The code for task2 fails. Update the Polygon class to fix the problem !!
    task4(); // TASK 4: uncomment this line, recompile and run. Identify the cause of the error.
    
    // TASK 5: Update the Polygon class to solve the problem in Task 4

    cout << "Exiting main" << endl;
    return 0;

}
