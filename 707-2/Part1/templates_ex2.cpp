#include <cstdlib>
#include <iostream>
#include "Point.cpp"

using namespace std;

/* CLASS TEMPLATES */

int main(int argc, char *argv[])
{

    /* TASK 1 */
    Point<float> p1(2.5f,3.5f);
    Point<int> p2(3,4);
    
    cout << "-------------" << endl;
    cout << "TASK 1" << endl;

    cout << p1.getX() << "-" << p1.getY() << endl;
    cout << p2.getX() << "-" << p2.getY() << endl;

    cout << "-------------" << endl;

    /* TASK 2 = the type of the parameters of the templates should be declared explicitly */
    //Point p(2.5f,3.5f); // Compile error

    /* TASK 3 = implicit casting performs */ 
    cout << "TASK 3" << endl;
    
    Point<int> p3('a',90);// char to int
    cout << p3.getX() << "-" << p3.getY() << endl;

    Point<char> p4('a',90);// int to char
    cout << p4.getX() << "-" << p4.getY() << endl;

    Point<int> p5(14,13.5);// double to int
    cout << p5.getX() << "-" << p5.getY() << endl;

    Point<float> p6(14.2,13.5f);// double to float
    cout << p6.getX() << "-" << p6.getY() << endl;

    cout << "-------------" << endl;
    
    return 0;
}
