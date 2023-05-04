// For each loop is used to access elements of any Array

#include <iostream>
using namespace std;

int main()
{
    // Array A
    int A[5] = {2, 4, 6, 8, 10};

    cout << "Array A\n";
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }

    cout << "Array B\n";
    // Array B
    float B[5] = {2.6f, 5.9f, 2, 4.5f, 8};

    for (float y : B) // FOR EACH LOOP
    {
        cout << y << endl;
    }

    cout << "Array C\n";
    char C[] = {'A', 66, 'C', 68};
    for (auto z : C) // 'auto' is used to automatically detect the data type of the Array C
    {
        cout << z << endl;
    }

    return 0;
}