// Recursion & its applications
// Recursion is simply a process in which a function calls itself.

#include <iostream>
using namespace std;

int factorial(int i)
{
    if (i == 1)
    {
        return i;
    }
    else
    {
        return i * factorial(i - 1); // Using the factorial function in function itself
    }
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int o = factorial(n);
    cout << "The factorial of " << n << " is : " << o;
}