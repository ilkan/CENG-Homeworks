/* CENG 707 Exercise 1  */

/* STUDENT INFORMATION
   -------------------
Name   :
Surname:
Number :
 */

/* INSTRUCTIONS

   In this exercise you should create a .cpp file called e1234567_exercise1.cpp
   (replace e1234567 with your number). This file should consist of the implementation of this
   header file (it should NOT contain a "main" function). The neccessary
   information about all of the functions that you will implement is provided
   below. You can only use the "iostream" and "mystring.h" header files. You
   CANNOT use C string library functions such as strcpy, strlen, etc. To
   test your codes you should write a driver file which contains a "main"
   function and compile both files together to obtain an executable. However,
   do not submit this driver file). PLEASE complete the information part
   above before you submit your code.

   Good luck.
*/

#ifndef __mystring_h__
#define __mystring_h__

class MyString
{
    private:
        int length;
        char* str;

    public:
        // constructor
        MyString(const char* s = "", int string_length = 0);

        // copy constructor (must perform deep copy)
       MyString(const MyString& s);

        // destructor (must release all the dynamically allocated memory)
        ~MyString();

        // assignment operator (must perform deep copy)
        MyString& operator=(const MyString& rhs);

        // overload < (compares the current string with the parameter using
        // the alphabetical comparison rules. You can assume that the strings
        // contain only lowercase letters.)
        bool operator<(const MyString& rhs) const;

        // returns a new string which is a concatenation of the current
        // string and the parameter string
        MyString operator+(const MyString& rhs) const;

        // returns true if the current string contains the parameter
        // string (in other words if the parameter is a substring of
        // the current string). Note that equal strings are considered
        // to contain each other and the empty string is contained by
        // all strings
        bool contains(const MyString& rhs) const;

        // prints the string followed by a newline
        void print() const;
};

#endif
