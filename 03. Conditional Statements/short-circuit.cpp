//

#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 6, i = 6; // Change sign < to > & vice-versa

    if (a < b && --i <= b)
    {
        cout << "Not Short Circuited" << endl; // Then i changes
    }
    else
    {
        cout << "Short Circuited" << endl; // Then i remains same
    }
    cout << i << endl;

    return 0;
}