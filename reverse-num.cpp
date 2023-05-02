// Reverse of a number

#include <iostream>
using namespace std;

int main()
{
    int n, temp, rem, rev = 0;
    cout << "Enter number :";
    cin >> n;

    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    cout << "The reverse number is " << rev;
    return 0;
}