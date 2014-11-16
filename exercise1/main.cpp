#include <iostream>
#include "mystring.h"

using namespace std;

//implementations

int main()
{
	cout<<"-----TASK1-----"<<endl;
        // constructor
        // task1:MyString(const char* s = "", int string_length = 0); //uncomment this line
        
    cout<<"-----TASK2-----"<<endl;
        // copy constructor (must perform deep copy)
        // task2:MyString(const MyString& s);
    cout<<"-----TASK3-----"<<endl;
        // destructor (must release all the dynamically allocated memory)
        //task3: ~MyString();  //uncomment this line
    cout<<"-----TASK4-----"<<endl;
        // assignment operator (must perform deep copy)
        //task4:MyString& operator=(const MyString& rhs);  //uncomment this line
    cout<<"-----TASK5-----"<<endl;
        // overload < (compares the current string with the parameter using
        // the alphabetical comparison rules. You can assume that the strings
        // contain only lowercase letters.)
        //task5:bool operator<(const MyString& rhs) const;  //uncomment this line
    cout<<"-----TASK6-----"<<endl;
        // returns a new string which is a concatenation of the current
        // string and the parameter string
        //task6:MyString operator+(const MyString& rhs) const;  //uncomment this line
    cout<<"-----TASK7-----"<<endl;
        // returns true if the current string contains the parameter
        // string (in other words if the parameter is a substring of
        // the current string). Note that equal strings are considered
        // to contain each other and the empty string is contained by
        // all strings
        //task7:bool contains(const MyString& rhs) const;  //uncomment this line
    cout<<"-----TASK8-----"<<endl;
        // prints the string followed by a newline
        //task8:void print() const;  //uncomment this line
    return 0;

}
