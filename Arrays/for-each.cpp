// For Each Loop is useful because there's no need to mention size of the array

#include <iostream>
using namespace std;

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // 'auto' is used to automatically detect the data type of the Array C
    // x is used to access the elements only, it doesn't change the original values of array

    for (auto x : A)
    {
        cout << x << endl;
    }

    return 0;
}