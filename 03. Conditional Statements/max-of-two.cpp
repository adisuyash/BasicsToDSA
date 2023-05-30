// To find maximum of two integers

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers :" << endl;
    cin >> a >> b;

    if (a > b)
    {
        cout << "Max is " << a;
    }
    else if (a < b)
    {
        cout << "Max is " << b;
    }
    else
    {
        cout << "Both are EQUAL";
    }

    return 0;
}