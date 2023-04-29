// Sum of n Natural Numbers

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter n :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "The Sum of " << n << " natural numbers is " << sum;
    return 0;
}