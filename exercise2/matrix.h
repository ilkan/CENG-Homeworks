/* CENG 707 Exercise 2  */

/* STUDENT INFORMATION
   -------------------
Name   :
Surname:
Number :
 */

/* INSTRUCTIONS

   In this exercise you should create a .cpp file called e1234567_exercise2.cpp
   (replace e1234567 with your number). This file should consist of the implementation of this
   header file (it should NOT contain a "main" function). The neccessary
   information about all of the functions that you will implement is provided
   below. You can only use the "iostream" header file and the Matrix class' interface
   header file that is given to you. You CANNOT include any other header files such as
   C's string.h. To test your codes you should write a driver file which contains a "main"
   function and compile both files together to obtain an executable. However,
   do not submit this driver file). PLEASE complete the information part
   above before you submit your code.

   Good luck.
*/

class DimensionMismatchException
{
};

class InvalidIndexException
{
};

template <class T>
class Matrix
{
private:
    T** data; // matrix elements stored here
    int rows; // number of rows
    int cols; // number of columns
public:
    Matrix(int numRows = 0, int numCols = 0); // allocates data but leaves it uninitialized
    Matrix(T const* const* inputData, int numRows, int numCols);
    Matrix(const Matrix& rhs);
   ~Matrix();

    Matrix& operator=(const Matrix& rhs);

    // all of the below functions may throw dimension mismatch exception
    Matrix operator+(const Matrix& rhs) const; // element-wise addition of two matrices
    Matrix operator-(const Matrix& rhs) const; // element-wise subtraction of two matrices
    Matrix operator*(const Matrix& rhs) const; // multiplication of two matrices

    // these two functions may throw invalid index exception
    T operator()(int r, int c) const; // returns the element value at row r and column c
    T& operator()(int r, int c); // returns reference of the element value at row r and column c

     int getRows() const; // returns the number of rows
     int getCols() const; // returns the number of columns

    void print() const; // prints the matrix with each column element separated by a tab and each row element in a new line print a newline after the last row
};
