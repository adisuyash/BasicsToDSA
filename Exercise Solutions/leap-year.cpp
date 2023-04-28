/* What a Leap Year is ?
- Divisible by 4
- Must not be a Century Year (i.e. 2100, 2300 etc.)
- Century Year must be divisible by 400 */

// Concept used: ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)))

#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << year << " is a leap year :)";
            }
            else
            {
                cout << year << " is not a leap year :(";
            }
        }
        else
            cout << year << " is a leap year :)";
    }
    else
        cout << year << " is not a leap year :(";

    return 0;
}