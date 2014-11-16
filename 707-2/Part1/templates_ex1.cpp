#include <cstdlib>
#include <iostream>

using namespace std;

/* FUNCTION TEMPLATES */

// Templates with one parameter
template <class T>
T sum1(T x,T y)
{
            return x+y;
}

// Templates may have more than one different type generic parameter
template <class T, class U>
U sum2(T x,U y)
{
        return x+y;
}

int main(int argc, char *argv[])
{

    /* TASK1 = The type of the parameters are defined implicitly */
   /* cout << "-------------" << endl;
    cout << "TASK 1" << endl;

    cout << sum1 (3,4) << endl;
    cout << sum1 (3.4,4.5) << endl;

    cout << "-------------" << endl;*/
    
    /* TASK2 = The sum1 function can not be called with different type parameters */  
    //cout << sum1 (1,2) << endl; // Compile Error
    //cout << sum1 (2.0f,3.5f) << endl; // Compile Error

    /* TASK3 = The type of the parameters of the template function can be defined explicitly. Implicit cast operation may be done */
   /* cout << "TASK 3" << endl;

    cout << sum1 <string> ("a","b") << endl; // Concatenate two string
    cout << sum1 <char> (' ','/') << endl; // ASCII: (32 + 47 = 79) = O (Big O)
    cout << sum1 <int> (' ','/') << endl; // 32 + 47 = 79
    cout << sum1 <char> ('A',2) << endl;// C

    cout << "-------------" << endl;*/

    /* TASK 4   
    cout << sum1 <const char> ('A','B') << endl; // Compile Error (const char)*/

    /* TASK 5 = Implicit casting according to the return type. The type of the return values is the type of the second parameter U.
    cout << "TASK 5" << endl;

    cout << sum2(1.2,2.7) << endl;// return type is double
    cout << sum2(1,2.8) << endl;// return type is double
    cout << sum2(2.8,1) << endl;// return type is int
    cout << sum2('a',2.5) << endl;// 97 + 2,5 = 99.5
    cout << sum2(2,'a') << endl;// ASCII: (2 + 97 = 99) = c

    cout << "-------------" << endl;
    
    /* TASK 6 */
    cout << sum2('a',2.5) << endl; // Compile Error. No operation for char* + double 
    
    return 0;
}





