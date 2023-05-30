// C++ Program to demonstrate that We can access a global
// variable if we have a local variable with same name in
// C++ using Scope resolution operator (::)
#include <iostream>
using namespace std;

// Global variable x
int x = 50;

int main()
{
    // Local variable x
    int x = 10;
    cout << "Value of global x is " << ::x << endl; // 'Scope Resolution ::' used
    cout << "Value of local x is " << x;
    return 0;
}
