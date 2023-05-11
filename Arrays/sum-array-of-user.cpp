// Sum of elements of Array given by user

#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    int sum = 0;

    // Get input from the user
    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    // Display the array
    cout << "\nThe array is:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    // Display the sum of the elements
    cout << "\nThe sum of the elements is " << sum << endl;

    return 0;
}
