// A palindromic number is a number that remains the same when its digits are reversed. For example, 16461. Write a program that prompts the user to input a number and determine whether the number is palindrome or not.

#include <stdio.h>

int main()
{
    int number, temp, remainder, reverse = 0;

    printf("Enter a positive number :");
    scanf("%d", &number);

    // temp is used because we will change the value of number i.e. (number / 10) & if we use original number, we will need to compare it with the reverse number later
    temp = number;

    while (temp > 0)
    {
        remainder = temp % 10;
        reverse = (reverse * 10) + remainder;
        temp = temp / 10;
    }

    // Comparing reverse with number
    if (number == reverse)
    {
        printf("Yes! it's a Palindrome Number");
    }
    else
    {
        printf("Not a Palindrome Number");
    }

    return 0;
}