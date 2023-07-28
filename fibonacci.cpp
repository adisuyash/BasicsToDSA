// Fibonacci Sequence 0 1 1 2 3 5 8 13....

#include <iostream>
using namespace std;

int main()
{
    long long int a = 0, b = 1, n, sum;
    cout << "Enter number of Fibonacci terms to display :";
    cin >> n;

    cout << "The Fibonacci Sequence till " << n << " terms is :" << endl;

    if (n == 1)
    {
        cout << a;
    }
    else if (n == 2)
    {
        cout << a << " " << b;
    }
    else
    {
        cout << a << " " << b << " ";
        for (int i = 0; i < n - 2; i++)
        {
            sum = a + b;
            cout << sum << " ";
            a = b;
            b = sum;
        }
    }

    return 0;
}