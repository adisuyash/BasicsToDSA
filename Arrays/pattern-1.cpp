/*
Print 1-25 in pattern such that :
1st row : 1 2 3 4 5
2nd row : 6 7 8 9 10
3rd row : 11 12 13 14 15
4th row : 16 17 18 19 20
5th row : 21 22 23 24 25
*/
#include <iostream>
using namespace std;

int main()
{
    int count = 1;

    cout << "Pattern (1-25) :" << endl;
    for (int i = 0; i < 5; i++)
    {
        // cout << "\nRow " << ++i << " : "; (uncomment if row number is printed too)
        for (int j = 0; j < 5; j++)
        {
            cout << count++ << "  ";
        }
        cout << endl;
    }

    return 0;
}