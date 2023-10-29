// Write a program that prompts the user to input a number and prints its mulitiplication table.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Table of %d is :\n", n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}