// Program to Multiply Matrices
#include <iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2)
    {
        cout << "Error !! It can't be multiplied";
        return 0;
    }

    // Storing elements of first matrix.
    cout << endl
         << "Enter elements of matrix 1:" << endl;
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    // Storing elements of second matrix.
    cout << endl
         << "Enter elements of matrix 2:" << endl;
    for (i = 0; i < r2; ++i)
        for (j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

    // Multiplying matrix a and b and storing in array mult.
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
        {
            mult[i][j] = 0;
            for (k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }

    // Displaying the multiplication of two matrix.
    cout << endl
         << "Output Matrix: " << endl;
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
        {
            cout << " " << mult[i][j];
            if (j == c2 - 1)
                cout << endl;
        }

    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;

//     int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int B[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
//     int prodC[3][3];

//     cout << "Multiplication [C] = [A][B] is :" << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             prodC[i][j] = ((A[i][j] * B[i][j]) + (A[i][j + 1] * B[i + 1][j]) + (A[i][j + 2] * B[i + 2][j]));
//             cout << prodC[i][j] << "  ";
//         }
//         cout << endl;
//     }

//     return 0;
// }