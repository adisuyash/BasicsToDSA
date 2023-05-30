/* Linear Search in an array */
#include <iostream>
using namespace std;

int main()
{
    int key;
    int arr[10] = {23, 45, 67, 4, 89, 87, 43, 1, 22, 51};

    // Finding KEY element
    cout << "Enter key element to find :";
    cin >> key;

    for (int i = 0; i < 10; i++)
    {
        if (key == arr[i])
        {
            cout << "Key Element found at index " << i << endl;

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

            // To terminate the program once key matches!
            exit(0);
        }
    }

    cout << "Key Element not found !";

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

    /*Linear Search in random array
    int sz, key;

    cout << "Enter the size of array (5-100):";
    cin >> sz;

    int randArray[sz];

    // Generate random arrays
    for (int i = 0; i < sz; i++)
    {
        randArray[i] = rand() % 100; // Generate number between 0 to 99
    }

    // Elements of array
    cout << "\nElements of the array :" << endl;
    for (int i = 0; i < sz; i++)
    {
        cout << randArray[i] << " ";
    }

    // Finding KEY element
    cout << "\nEnter key element to find :";
    cin>>key;

    for (int i = 0; i < sz; i++)
    {
        if (key == randArray[i])
        {
            cout << "Key Element found at index " << i;
            exit(0);
        }
    }
    cout << "Key Element not found !";*/

    return 0;
}