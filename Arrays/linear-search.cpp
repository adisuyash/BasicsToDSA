/* Linear Search in an array */
#include <iostream>
using namespace std;

int main()
{
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
    cout << "Key Element not found !";

    return 0;
}