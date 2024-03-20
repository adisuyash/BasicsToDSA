//

#include <iostream>
using namespace std;

int main()
{
    int array[5] = {4, 8, 12, 16, 20};
    int size = 5;

    cout << "The original array is : ";
    for (int i = 0; i <= 4; i++)
    {
        cout << array[i] << " ";
    }

    // Reversing the Array
    int tempArray[5];
    for (int i = 4; i >= 0; i--)
    {
        tempArray[4 - i] = array[i];
    }
    for (int i = 0; i <= 4; i++)
    {
        array[i] = tempArray[i];
    }

    cout << endl << "The reversed array is : ";
    for (int i = 0; i <= 4; i++)
    {
        cout << array[i] << " ";
    }


    return 0;
}