// Global & Local Variable
// The value of variable is taken from the nearest scope if it conflicts with other scopes

#include <iostream>
using namespace std;

int g = 0; // Global Variable (g) is declared outside function blocks

void fun()
{
    g = g + 10; // Local Variable (a) is declared inside function blocks
    {
        g = g + 50; // g = 10 + 15 + 50
        cout << "Inside block(), g is :" << g << endl;
    }
    cout << "In funny(), g is :" << g << endl; // g = 65 + 10
}

int main()
{
    g = 15;
    cout << "In main(), g is :" << g << endl; // g = 15
    fun();
    return 0;
}