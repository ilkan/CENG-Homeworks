#ifndef __e1653567_exercise1_CPP__
#define __e1653567_exercise1_CPP__

#include "mystring.h"
#include <iostream>
#include <cstring>

using namespace std;


MyString::MyString(const char* s = "", int string_length = 0)
{
	str=new char[strlen(s)+1];
	strcpy(str,s);
	length = string_length;
	str = new char[length];
}

MyString::MyString(const MyString& s)
{
	 length = s.length;
     str = new char[length];
  // Use strcpy to copy the string and eliminate the need for a for() loop
     strcpy(str, s.str);
}
MyString::~MyString()
{
  delete [] str;
}

MyString::MyString& operator=(const MyString& rhs);
{
	
}
bool operator <(const MyString &rhs)
{
  int i = strcmp(rhs.str);
  // will return true if i is negative, false otherwise
  return (i < 0);
}
MyString operator+(const MyString& rhs) const
{
	MyString temp;

  // temp's size has to be big enough to hold both strings. 
  temp.length = rhs.length;
  temp.str = new char[temp.length];

  // Copy 
  strcpy(temp.str, rhs.str);

  // return the new string
  return temp;
}
bool contains(const MyString& rhs) const
{
	
}
#endif
