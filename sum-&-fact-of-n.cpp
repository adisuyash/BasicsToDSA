// Sum of n Natural Numbers
// Factorial of n

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, fact = 1;

    cout << "Enter n :";
    cin >> n;

    // Sum of Natural Numbers upto n
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    // Factorial of n
    for (int j = 1; j <= n; j++)
    {
        fact *= j;
    }
    cout << "The Sum of " << n << " natural numbers is " << sum << endl;
    cout << "The Factorial of " << n << " is " << fact;

    return 0;
}