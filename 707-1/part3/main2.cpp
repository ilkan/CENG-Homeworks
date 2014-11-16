#include <iostream>
#include <math.h>

#include "Point.h"
#include "Triangle.h"

using namespace std;

void task8(){
    
    // Point default constructor is called although we have declared no Point instances!
    // Point default destructor is called although default Triangle constructor does not call it!
    cout << "**********************" << endl;
    cout << "Entering task8 function" << endl;
    
    Triangle t;
    
    cout << "Exiting task8 function" << endl;
    cout << "**********************" << endl;
    
}

void task9(){
    
    // Why is copy consructor called?
    // TIP: Check Triangle constructor code.
    cout << "**********************" << endl;
    cout << "Entering task9 function" << endl;
    

    Point p1(0,0);
    Point p2(3,0);
    Point p3(0,4);
    
    Triangle t(p1,p2,p3);
    
    
    cout << "Exiting task9 function" << endl;
    cout << "**********************" << endl;
    
}

void task10(){
    
    // Examine when copy constructor is called.
    // TIP: Copy constructor is called when the object is returned by value.

    cout << "**********************" << endl;
    cout << "Entering task10 function" << endl;
    
    Triangle t;

    cout << "--------" << endl;
    
    int x = t.getP1NoRef().getX();
    cout << "Point 1 X: " << x << endl;
    int y = t.getP1NoRef().getY();
    cout << "Point 1 Y: " << y << endl;
    
    cout << "--------" << endl;
    
    int x2 = t.getP1().getX();
    cout << "Point 1 X: " << x2 << endl;
    int y2 = t.getP1().getY();
    cout << "Point 1 Y: " << y2 << endl;
    
    cout << "Exiting task10 function" << endl;
    cout << "**********************" << endl;
    
}

void task11(){
    
    // Examine when copy constructor is called.
    // TIP: Copy constructor is called when the object is passed as a parameter by value.
    cout << "**********************" << endl;
    cout << "Entering task11 function" << endl;
    
    Triangle t;
    Point p(2,3);
    
    t.print();
    
    t.setP1(p);
    
    t.print();
    
    p.setX(6);
    t.setP1NoRef(p);
    
    t.print();
    
    cout << "Exiting task11 function" << endl;
    cout << "**********************" << endl;
    
}

void task12(){
    
    // Note that copy constructor is not defined for the Triangle class!!
    // But the code works as if there is a copy constructor!!
    cout << "**********************" << endl;
    cout << "Entering task12 function" << endl;
    
    Point p1(1,2);
    Point p2(1,3);
    Point p3(1,4);
    
    Triangle t1(p1,p2,p3);
    cout << "Triangle 1 created" << endl;
    Triangle t2(t1);
    
    t1.print();
    t2.print();
    
    t1.setP3(Point(1,5));
    
    t1.print();
    t2.print();
    
    cout << "Exiting task12 function" << endl;
    cout << "**********************" << endl;
    return;
}




int main()
{
    
    
    // While performing the tasks in this part,
    // examine the console output carefully
    // with the following questions in mind:
    // Which constructor is called?
    // What happens if the constructor does not explicitly initialize the class members?
    // When is a copy constructor is called? Check return values of function definitions for Task 10 & 11.
    
    cout << "Entering main" << endl;
    
    task8(); // TASK 8: uncomment this line, recompile and run.
    task9(); // TASK 9: uncomment this line, recompile and run.
    task10(); // TASK 10: uncomment this line, recompile and run.
    task11(); // TASK 11: uncomment this line, recompile and run.
    task12(); // TASK 12: uncomment this line, recompile and run.
    // *TASK 13: add a copy constructor to the Triangle class and reperform Task 12. Compare the outputs!
    // TASK 14: (take-home exercise) Examine the difference between the contructor initialization list notation and assigning the member variables in the constructor. You should update Triangle(Point, Point,Point) constructor to observe differences.
   
    cout << "Exiting main" << endl;
    return 0;

}
