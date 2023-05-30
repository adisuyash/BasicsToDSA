// Menu Driven Switch case

#include <iostream>
using namespace std;

int main()
{
    cout << "Menu\n";
    cout << "1. Addition\n"
         << "2. Subtraction\n"
         << "3. Multiplication\n"
         << "4. Division\n";

    int option;
    cout << "Enter Option No :";
    cin >> option;

    int a, b, c;
    cout << "Enter numbers :";
    cin >> a >> b;

    switch (option)
    {
    case 1:
        c = a + b;
        cout << "Addition is " << c;
        break;
    case 2:
        c = a - b;
        cout << "Subtraction is " << c;
        break;
    case 3:
        c = a * b;
        cout << "Multiplication is " << c;
        break;
    case 4:
        c = a / b;
        cout << "Division is " << c;
        break;

    default:
        cout << "Invalid Option Selected" << endl;
        break;
    }

    return 0;
}