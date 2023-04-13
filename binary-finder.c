// Write a program that prompts the user to input a decimal integer and display its binary equivalent.

#include <stdio.h>

int main()
{
    int number, temp, remainder, place = 1, binary = 0;
    printf("Enter number: ");
    scanf("%d", &number);

    temp = number;
    while (temp > 0)
    {
        remainder = temp % 2;
        binary = binary + (remainder * place);
        place = place * 10;
        temp = temp / 2;
    }
    printf("The Binary of %d is %d", number, binary);
    return 0;
}