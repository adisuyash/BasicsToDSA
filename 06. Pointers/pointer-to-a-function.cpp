// Pointer to a function

#include <iostream>
using namespace std;

void hello()
{
    cout << "Hello Pointer !";
}

int main()
{
    void (*fp)(); // Declaration of Pointer to a Function ["data_type_same_as_that_of_function (*name) ()"]
    fp = hello;   // Initialization of pointer to function "hello"
    (*fp)();      // Calling the function via pointer fp

    return 0;
}