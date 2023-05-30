// Armstrong number is a number in which the sum of cube of each digits is equal to the number itself.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, temp, rem, sum = 0;
    cout << "Enter number :";
    cin >> n;

    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        temp /= 10;
        sum += (rem*rem*rem); // pow(rem,3) wasn't working on VSCode
    }
    if (sum == n)
    {
        cout << "It is an Armstrong Number";
    }
    else
    {
        cout << "It is not an Armstrong Number";
    }

    return 0;
}