#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

template <class T>
void print_vector(vector<T> v)
{
	int i;

	for(i = 0; i < v.size(); i++)
		cout << v[i] << endl;
}

int main(int argc, char *argv[])
{
	/* TASK 1 */
	vector<int> v1(4); // Vector with size 4, no any value assigned
	vector<int> v2(4,3);// Vector with size 4 and values of all elements is 3
	vector<int> v3; // Vector with 0 size

	cout << "--------------------------------------" << endl;
    	cout << "TASK 1" << endl;

	cout << "v1 is printed" << endl;
	print_vector(v1);
	cout << "v2 is printed" << endl;
	print_vector(v2);
	cout << "v3 is printed" << endl;
	print_vector(v3);

	cout << "--------------------------------------" << endl;

	/* TASK 2 =  Adding a value to the end of the vector*/
	cout << "TASK 2" << endl;

	v3.push_back(7);
	cout << "Value 7 is added to v3 with push_back function" << endl;
	print_vector(v3);
	v3.push_back(9);
	cout << "Value 9 is added to v3 with push_back function" << endl;
	print_vector(v3);

	cout << "--------------------------------------" << endl;

	/* TASK 3 =  We can also assign a value like arrays */
	cout << "TASK 3" << endl;

	v2[3] = 5;
	cout << "Index 3 of v2 is updated with value 5" << endl;
	print_vector(v2);

	cout << "--------------------------------------" << endl;

	/* TASK 4 = Removing the value of last element */
	cout << "TASK 4" << endl;

	v2.pop_back();
	cout << "Last index of v2 is removed" << endl;
	print_vector(v2);

	cout << "--------------------------------------" << endl;

	/* TASK 5 = Built-in assignment operator is called */
	cout << "TASK 5" << endl;

	v1 = v2;
	cout << "v2 is assigned to v1" << endl;
	print_vector(v1);

	cout << "--------------------------------------" << endl;

	/* TASK 6 = Removing the value of last element does not affect v1 (HOME TASK) */
	cout << "TASK 6" << endl;

	v2.pop_back();
	cout << "Last index of v2 is removed" << endl;
	print_vector(v2);
	cout << "Removing from v2 does not effect the v1" << endl;
	print_vector(v1);

	cout << "--------------------------------------" << endl;

	/* TASK 7 = Size of the v1 change after assignment of v2 (HOME TASK) */
	cout << "TASK 7" << endl;

	cout << "Size of v1 before assignment = " << v1.size() << " Size of v2 = "<< v2.size() << endl;
	v1 = v2;
	cout << "Size of v1 after assignment = " << v1.size() << " Size of v2 = "<< v2.size() << endl;
	print_vector(v1);

	cout << "--------------------------------------" << endl;

	/* TASK 8 = We can not assign two vector with different type.  (HOME TASK) */
	
	cout<<"TASK 8"<<endl;
	vector<int> v4(4);
	v4 = v1;
	print_vector(v4);

	return 0;
}
