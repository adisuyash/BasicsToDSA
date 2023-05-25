// Matrix : Addition Subtraction

#include <iostream>
using namespace std;

int main()
{
    int n;

    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[2][3] = {{10, 11, 12}, {13, 14, 15}};
    int addC[3][3], subC[3][3];

    cout << "Addition [C] = [A] + [B] is :" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            addC[i][j] = A[i][j] + B[i][j];
            cout << addC[i][j] << "  ";
        }
        cout << endl;
    }

    cout << "Subtraction [C] = [A] - [B] is :" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            subC[i][j] = A[i][j] - B[i][j];
            cout << subC[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}