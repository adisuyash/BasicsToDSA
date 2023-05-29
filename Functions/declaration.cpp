// Function declaration
/* data_type_of_what_to_return function_name(parameters with their data type){
    //
    // body_of_function
    //
    return what_to_return
}*/

#include <iostream>
using namespace std;

int max(int x, int y)
{
    int z;
    z = x > y ? x : y;
    return z;
}

int main()
{
    int a, b, c;
    cout << "Enter number one: ";
    cin >> a;
    cout << "Enter number two: ";
    cin >> b;

    c = max(a, b);
    cout << "Max of " << a << " and " << b << " is :" << c;
    return 0;
}