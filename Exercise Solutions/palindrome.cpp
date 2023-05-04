// Palindrome Number

#include <iostream>
using namespace std;

int main()
{
    int n, temp, rem, reverse = 0;
    cout << "Enter number :";
    cin >> n;

    temp = n;

    while (temp > 0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp = temp / 10;
    }
    if (n == reverse)
    {
        cout << "It is Palindrome Number";
    }
    else
    {
        cout << "It is not Palindrome Number";
    }

    return 0;
}