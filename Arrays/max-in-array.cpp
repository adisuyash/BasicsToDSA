// Print max element in Array inputted by user

#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    int max;

    // Get input from the user
    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // Display the array
    cout << "\nThe array is:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    // Find the maximum value
    max = arr[0];
    for (int i = 1; i < 5; i++)
    {
        max = (arr[i] > max ? arr[i] : max);
    }

    // Display the maximum value
    cout << "\nThe maximum value is " << max << endl;

    return 0;
}
