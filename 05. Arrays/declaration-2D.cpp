// 2D Arrays in C++

#include <iostream>
using namespace std;

int main()
{
    int A[2][3];

    cout << "Enter elements of matrix (2 x 3) : ";
    for (auto &i : A)
    {
        for (auto &j : i)
        {
            cin >> j;
        }
    }

    cout << "Elements of matrix (2 x 3) : " << endl;
    for (auto &i : A)
    {
        for (auto &j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}