#include <iostream>
#include <cmath>
using namespace std;

// Traditional method
int countDigitsTraditional(int n)
{
    if (n == 0)
        return 1;
    int count = 0;
    n = abs(n);
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

// Using log10 method
int countDigitsLog(int n)
{
    if (n == 0)
        return 1;
    return floor(log10(abs(n))) + 1;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << "Traditional method: " << countDigitsTraditional(num) << " digits." << endl;
    cout << "Log10 method: " << countDigitsLog(num) << " digits." << endl;

    return 0;
}