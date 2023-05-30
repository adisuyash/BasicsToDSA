// Sum of elements of an Array

#include <iostream>
using namespace std;

int main()
{
    int A[] = {5, 6, 7, 8, 9};
    int sum = 0;

    cout << "The elements of Array are :\n";
    for (auto x : A)
    {
        sum += x;
        cout << x << endl;
    }

    cout << "The Sum of elements of Array is " << sum;
    return 0;
}