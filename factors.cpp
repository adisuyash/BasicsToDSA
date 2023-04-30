// Factors of a number

#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;

    cout << "Enter n :";
    cin >> n;

    cout << "The factors of " << n << " are :" << endl;
    for (i; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}