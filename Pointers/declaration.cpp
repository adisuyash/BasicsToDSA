// Declaration of Pointers
// Pointers are address variables, which stores address of a data variable or any other address variable

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p; // Declaration
    p = &a; // Initialization

    cout << a << endl;  // Value of a
    cout << &a << endl; // Address of a
    cout << p << endl;  // Value of p (i.e address of a)
    cout << &p << endl; // Address of p
    cout << *p << endl; // Dereferencing (Value of that variable to whom pointer is pointing)

    return 0;
}