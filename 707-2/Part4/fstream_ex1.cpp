#include <cstdlib>
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
	/* TASK 1 = Read an integer matrix from file and store it in 2D vector array. */
	/* Each line finish with -1 and the file finish with -2 */

	const char* filename = "data.txt";// Filename
	vector< vector<int> > data;// File content stored in this 2D vector array
	string line,temp;
	int partial_data;

	ifstream infile;
	infile.open (filename);//Opening the file

	getline(infile,line);// getline command reads the line as a string	
	while(line.compare("-2") != 0)
	{
		vector<int> temp_array;//Temp array used in parsing operation

		while(line.find (" ") != string::npos)//Parsing the line by using space character
		{
			temp = line.substr(0,line.find (" "));

			partial_data = atoi(temp.c_str());//Convert string to int
			temp_array.push_back(partial_data);// Adding the data value to the vector

			line = line.substr(line.find (" ")+1,line.size()-line.find (" ")-1);// Removing the added data value from line string
		}
		data.push_back(temp_array);//Adding data value of the line

		getline(infile,line);
	}
	infile.close();// Closing the file

	/* print the values of the 2D vector */
	int i,j;
	
	cout << "--------------------------------------" << endl;
    	cout << "TASK 1" << endl;

	for(i=0;i<data.size();i++)
	{
		for(j=0;j<data[i].size();j++)
			cout << data[i][j] << " ";
		cout << "\n"; 
	}

	cout << "--------------------------------------" << endl;

	
}
