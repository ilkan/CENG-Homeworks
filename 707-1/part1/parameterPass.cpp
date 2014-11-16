#include <iostream>
using namespace std;

int functionWithDefaultArguments(int x, int multiplier = 5){
    return x*multiplier;
}


void foo(int x){
    x = x + 1;
}

void fooRef(int& x){
    x = x + 5;
}

void fooPtr(int* x){
    *x = *x + 3;
    x=NULL;
}

void resetArray(int*& arrayPtr){
    delete[] arrayPtr;
    arrayPtr = NULL;
}

void fooConst(const int x){
    //x = x + 5;
    cout << "fooConst parameter: " << x << endl;
}

void fooRefConst(const int& x){
    //x = x + 5;
    cout << "fooRefConst parameter: " << x << endl;
}

void fooPtrConst(const int* x){

    //*x = *x + 5;
    x=NULL;
}

int main(){
   
    
    // TIP 1: & sign next to the parameter means you can change the value of the argument.
    // TIP 2: If there is & sign next to parameter, parameter is 'passed by reference'
    //          otherwise parameter is 'passed by value'
    // call by value: A copy of the argument is made and the function operates on this copy. Updates in the function are not reflected to the original argument.
    // call by reference: Address of the function is passed to the function, function updates the argument.


    ////////////////////////////////////////////////////
    cout << "******************************" << endl;
    
    cout << "Default Arguments" << endl;
    cout << "With multiplier passed: " << functionWithDefaultArguments(2,3) << endl;

    //TASK 1: Uncomment the line below. Compare the output with the previous line.
    cout <<  "With default multiplier: " << functionWithDefaultArguments(2) << endl;
    cout << "******************************" << endl;
   
    /////////////////////////////////////////////////////
    
    cout << "******************************" << endl;
    cout << "Parameter Passing" << endl;
    
    // Question the meaning of the & sign in function definitions.
    int b = 7;
    cout << "b: " << b << endl;
    foo(b); // TASK 2: Uncomment this line and the line below
    cout << "b after foo: " << b << endl;
    
    fooRef(b);  // TASK 3: Uncomment this line and the line below
    cout << "b after fooRef: " << b << endl;
    
    fooPtr(&b); // TASK 4: Uncomment this line and the line below
    cout << "b after fooPtr: " << b << endl;

    int* ar = new int[3];
    //resetArray(ar);  // TASK 5: uncomment this line.
    
    cout << "After reset array: " << ar  << endl;
    cout <<  "a[0]:" << ar[0] << endl;
    
    cout << "******************************" << endl;

    /////////////////////////////////////////////////////
    
    // TIP 3: const keyword means the function cannot update the value of the argument.

    cout << "******************************" << endl;

    cout << "Const Qualifier With Parameters" << endl;

    int c = 7;

    fooConst(c); //TASK 6: Uncomment the commented line in fooConst
    
    fooRefConst(c); //TASK 7: Uncomment the commented line in fooRefConst

    // TASK 8: Think about why we may use const type&
    // We cannot update the value of the argument since const but why to add a reference?

    fooPtrConst(&c); //TASK 9: Uncomment the commented line in fooPtrConst and observe behaviour
		     // Compare the behaviour with the fooPtr method.

    cout << "c after fooPtrConst: " << c << endl;
    return 0;

}

