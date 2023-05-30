// Static variables in a Function
// Global variables can be accessed anywhere in the memory while Static variables can be accessed only inside the function in which is declared
// Both Static & Global variables remain in the memory

#include <iostream>
using namespace std;

void demo()
{
    // static variable
    static int count = 0; // static variable will be present in the memory till program ends
    cout << count << " ";

    // Value is updated and will be carried to next function calls
    count++;
}

int main()
{
    for (int i = 0; i < 5; i++) // FOR Loop to show that Static Variable remains in the mnemory and is updated when function is called
    {
        demo();
    }
    return 0;
}