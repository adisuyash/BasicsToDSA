// Linear Search using functions

#include <iostream>
using namespace std;

int Search(int A[], int n, int key)
{
    for (int i = 0; i < 10; i++)
    {
        if (A[i] == key)
        {
            return i;
        }
    }
}

int main()
{
    int A[] = {3, 53, 55, 34, 57, 12, 45, 7, 89, 44};
    int n = 10;
    int key;

    cout << "Enter key element to search :";
    cin >> key;

    cout << "The key element is found at index " << Search(A, n, key);

    return 0;
}