/* Write a program to offer discounts on Total Bill Amount
with input as Total Amount & calculate discount

If bill amount less than 100 : No Discount
If bill amount greater than 100 and less than 500 : 10 % Discount
If bill amount greater than 500 : 20 % Discount */

#include <iostream>
using namespace std;

int main()
{
    float billAmount, discount;

    cout << "Enter Bill Amount :";
    cin >> billAmount;

    if (billAmount < 100)
    {
        discount = 0.0;
    }

    else if ((billAmount >= 100) && (billAmount < 500))
    {
        discount = billAmount * 10 / 100;
    }
    else
    {
        discount = billAmount * 20 / 100;
    }

    cout << "Bill Amount is :" << billAmount << endl;
    cout << "Discount is :" << discount << endl;
    cout << "Discounted Amount is :" << billAmount - discount << endl;

    return 0;
}