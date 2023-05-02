// Greatest Common Divisor of any number

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter two numbers :";
    cin >> n >> m;

    while (m != n)
    {
        if (m > n)
        {
            m = m - n;
            // cout << "m is " << m << endl;
        }
        else
        {
            n = n - m;
            // cout << "n is " << n << endl;
        }
    }
    cout << "GCD is " << m;
    return 0;
}