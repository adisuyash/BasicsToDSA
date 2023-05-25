// How to store memory dynamically in Heaps !

#include <iostream>
using namespace std;

int main()
{
    int arrStack[5] = {1, 5, 4, 5, 6};
    int *p;
    p = new int[5]; // Dynamically Allocating Memory in Heaps
    p[0] = 3;
    p[1] = 7;
    p[2] = 5;
    p[3] = 4;
    p[4] = 8;

    // Array in Stack
    cout << "Array in Stack (size = " << sizeof(arrStack) << ") : ";
    for (auto j : arrStack)
    {
        cout << j << " ";
    }

    // Array in Heap
    cout << "\nArray in Heap (size = " << sizeof(arrStack) << ") : ";
    cout << p[0] << " ";
    cout << p[1] << " ";
    cout << p[2] << " ";
    cout << p[3] << " ";
    cout << p[4] << "\n";

    delete[] p;  // Delocating Memory (to avoid memory leakage problem)
    p = nullptr; // NULL or nullptr are used when pointer isn't pointing to anything

    cout << "Memory of Heap Deallocated !";
    cout << p[0] << p[1] << p[3]; // Checking whether p is pointing or not "These values will not be printed"

    cout << "Nothing printed !!";

    return 0;
}