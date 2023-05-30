// To check whether a number is Prime Number or not

#include <iostream>
using namespace std;

int main()
{
    int n, count = 0; // when count = 2, break & print PRIME else not PRIME

    cout << "Enter n :";
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if (count == 2)
            {
                break;
            }
        }
    }
    if (count == 2)
    {
        cout << "It is a not Prime Number";
    }
    else
    {
        cout << "It is a Prime Number";
    }

    return 0;
}