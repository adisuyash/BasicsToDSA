/* Write a program that prompts the user to input number of calls and calculate the monthly telephone bills as per the following rule:

Minimum Rs. 200 for up to 100 calls.
Plus Rs. 0.60 per call for next 50 calls.
Plus Rs. 0.50 per call for next 50 calls.
Plus Rs. 0.40 per call for any call beyond 200 calls.*/

#include <stdio.h>

int main()
{
    int n;
    float bill;

    printf("Enter number of calls:");
    scanf("%d", &n);

    if (n <= 100)
    {
        bill = 200;
    }
    else if ((n > 100) && (n <= 150))
    {
        n = n - 100;
        bill = 200 + (n * 0.60);
    }
    else if ((n > 150) && (n <= 200))
    {
        n = n - 150;
        bill = 200 + (50 * 0.60) + (n * 0.50);
    }
    else
    {
        n = n - 200;
        bill = 200 + (50 * 0.60) + (50 * 0.50) + (n * 0.40);
    }

    printf("Your monthly bill is : %0.2f", bill);
    return 0;
}