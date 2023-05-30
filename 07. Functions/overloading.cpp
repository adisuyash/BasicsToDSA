/*Function Overloading
- is defined as the process of having two or more functions with the same name, but different in parameters is known as function overloading in C++.
- In function overloading, the function is redefined by using either different types of arguments or a different number of arguments but not with the return type alone*/

#include <iostream>
using namespace std;

int add(int x, int y)
{
    int z = x + y;
    return z;
}
float add(float x, float y)
{
    float z = x + y;
    return z;
}
int add(int x, int y, int z)
{
    int w = x + y + z;
    return w;
}

int main()
{
    cout << add(10, 5) << endl;
    cout << add(12.5f, 3.4f) << endl;
    cout << add(10, 20, 3) << endl;
    return 0;
}