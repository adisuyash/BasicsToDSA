/*
Class is a blueprint or a user-defined data type that serves as a template for creating objects. It encapsulates data (member variables) and functions (member functions) related to a specific entity or concept.
*/

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
    rectangle r1, r2;
    r1.length = 50;
    r1.breadth = 20;
    cout << "Area of r1 is :" << r1.area() << endl;
    cout << "Perimeter of r1 is :" << r1.perimeter() << endl;

    r2.length = 100;
    r2.breadth = 10;
    cout << "Area of r2 is :" << r2.area() << endl;
    cout << "Perimeter of r2 is :" << r2.perimeter() << endl;
    return 0;
}