// Default Arguments in C++

#include <iostream>
using namespace std;

int max3(int a, int b = 0, int c = 0 /* Value of b & c is by default = 0*/)
{
    return ((a > b && a > c) ? (a) : ((b > c) ? b : c));
}

int main()
{
    cout << max3(3) << endl;      // 2nd & 3rd arguments are taken as 0 by default
    cout << max3(28, 40) << endl; // 3rd argument is taken as 0 by default
    cout << max3(32, 44, 65) << endl;

    return 0;
}