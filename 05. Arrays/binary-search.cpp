/* Binary Search in array
- [MUST] Lists should be sorted order in order to find an element via binary search */

#include <iostream>
using namespace std;

int main()
{
    int key;
    int arr[10] = {1, 4, 22, 23, 43, 45, 51, 67, 87, 89}; // Sorted List !!

    // Finding KEY element
    cout << "Enter key element to find :";
    cin >> key;

    // Binary Search Algorithm
    int l = 0, r = 9, mid; // l=index of arr[0] i.e '0' & r=index of arr[10-1] i.e '9'

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (arr[mid] != key)
        {
            if (arr[mid] < key)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        else
        {
            cout << "Key Element found at index " << mid << endl;
            // Elements of array
            cout << "Elements: ";
            for (int i = 0; i < 10; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "\nIndices: ";
            for (int i = 0; i < 10; i++)
            {
                cout << i << "  ";
            }
            return 0;
        }
    }

    cout << "Key Element not found !" << endl;

    // Elements of array
    cout << "Elements: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nIndices: ";
    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }

    return 0;
}