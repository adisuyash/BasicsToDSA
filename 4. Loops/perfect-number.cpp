// To find whether entered number is a Perfect Number or not

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Enter n :";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    cout << "The Sum of the factors of " << n << " is " << sum << endl;

    if (sum / n == 2)
    {
        cout << "It is a Perfect Number";
    }

    else
    {
        cout << "It is not a Perfect Number";
    }

    return 0;
}