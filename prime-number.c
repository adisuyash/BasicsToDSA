/* Write a program that prompts the user to input a positive integer. It should then output a message indicating whether the number is a prime number.

A prime number is a number that is evenly divisible only by itself and 1. For example, the number 5 is prime because it can be evenly divided only by 1 and 5. The number 6, however, is not prime because it can be divided evenly by I, 2, 3, and 6. */

#include <stdio.h>

int main()
{
    int number;
    int flag = 1;

    printf("Enter a number :");
    scanf("%d",&number);

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if ((flag == 1) && (number != 1))
    {
        printf("Number is prime");
    }
    else
    {
        printf("Number is not prime");
    }

    return 0;
}