#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	/* TASK 1 = Adding two string object and showing the size of the string*/
	string str1 = "After adding str1 and str2, ";
	string str2 = "we get str3";
	string str3;

	str3 = str1 + str2;

	cout << "--------------------------------------" << endl;
    	cout << "TASK 1" << endl;

	cout << str3 << endl;
	cout << "Size of str1 = " << str1.size() << endl; // # of elements of string object
	cout << "Size of str2 = " << str2.size() << endl; // # of elements of string object
	cout << "Size of str3 = " << str3.size() << endl; // # of elements of string object

	cout << "--------------------------------------" << endl;

	
	/* TASK 2 = Built-in assignment operation between two string object */
	string str4 = "We assign str 4 to str5";
	string str5;

	str5 = str4;

	cout << "TASK 2" << endl;

	cout << str5 << endl;

	cout << "--------------------------------------" << endl;

	/* TASK 3 = Concatenate string object and a string */
	str5 += " and after that, we append this string to str5";

	cout << "TASK 3" << endl;

	cout << str5 << endl;

	cout << "--------------------------------------" << endl;

	/* TASK 4 = Find the index of first space character */
	string str6 = "Find the first space character";
	cout << "TASK 4" << endl;

	cout << "Index of space is " << str6.find(' ') << endl;

	cout << "--------------------------------------" << endl;

	/* TASK 5 = Find the index of first "the" character. */
	/*  If it does not exist the return value is equal to string::npos */
	string str7 = "the string contains at least one the";

	cout << "TASK 5" << endl;

	if (str7.find ("pthe") != string::npos) 
	{
    		cout  << "Contains at least one the !" << endl;
	}
	else
	{
    		cout  << "Does not contain any the !" << endl;
	}

	cout << "--------------------------------------" << endl;


	/* TASK 6 = Take the substring from the str8 and copy it to the str9 */
	/* It starts from the index of first "copy" string and takes str8.size() - str8.find("copy") character */
	string str8 = "We take the substring from the str8 and copy it to the str9";
	string str9;

	str9 = str8.substr(str8.find("copy"),str8.size() - str8.find("copy"));
	cout << "TASK 6" << endl;
	
	cout << str9 << endl;

	cout << "--------------------------------------" << endl;

	string str10 = "green apple";
	string str11 = "red apple";

	/* TASK 7 = Compare two string object */
	cout << "TASK 7" << endl;

	if(str10.compare(str11) != 0) 
		cout << "Both string are not same" << endl;
	else
		cout << "Both string are same" << endl;

	cout << "--------------------------------------" << endl;

	/* TASK 8 = Take a substring from str10 and compare it with string "apple" (HOME TASK) */
	cout << "TASK 8" << endl;
	
	if(str10.compare(6,5,"apple") == 0)
		cout << "The substring of str10 is same as apple" << endl;
	else
		cout << "The substring of str10 is not same as apple" << endl;

	cout << "--------------------------------------" << endl;

	/* TASK 9 = Take a substring from str10 and compare it with the substring of str11 (HOME TASK) */
	cout << "TASK 9" << endl;

	if (str10.compare(6,5,str11,4,5) == 0)
		cout << "The substring of str10 is equal to substring of str11" << endl;
	else
		cout << "The substring of str10 is not equal to substring of str11" << endl;

	cout << "--------------------------------------" << endl;
	
	return 0;
}
