/*
Print * pattern such that :
*
* *
* * *
* * * *
* * * * *
*/

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter n for n x n pattern : ";
    cin >> n;

    cout << "1st Star Pattern : (Lower Left)" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= j)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    cout << endl
         << "2nd Star Pattern : (Upper Right)" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << endl
         << "3rd Star Pattern : (Lower Right)" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) >= n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << endl
         << "4th Star Pattern : (Upper Left)" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) <= n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}