// Pointer to an Object "->"
// For making objects in heap, use 'rectangle *ptr = new rectangle';

#include <iostream>
using namespace std;

class rectangle
{
public:
    int length;
    int breadth;

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
       return 2 * (length + breadth);
    }
};

int main()
{
    rectangle r;
    rectangle *p;
    p = &r;

    p->length = 32;
    p->breadth = 8;
    cout << "Area of p is :" << p->area() << endl;
    cout << "Perimeter of p is :" << p->perimeter() << endl;

    return 0;
}