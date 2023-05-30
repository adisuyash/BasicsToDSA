// Swapping two numbers using Call by Reference

#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    cout << "Before swap\nX = " << x << ", Y = " << y << endl;
    swap(x, y);
    cout << "After swap\nX = " << x << ", Y = " << y;
    return 0;
}