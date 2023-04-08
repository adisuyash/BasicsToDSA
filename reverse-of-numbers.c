// Write a program that prompts the user to input a number and reverse its digits. For example, the reverse of 12345 is 54321; reverse of 5600 is 65.

#include<stdio.h>
    
int main()
{
    // int n,rem;
    // printf("Enter number:");
    // scanf("%d",&n);

    // printf("Original number is: %d\n",n);
    // printf("Reversed number is: ");
    
    // do{
    //     rem=n%10;
    //     n=n/10;
    //     printf("%d",rem);
    // } while (n>=1);

    int number, temp, remainder, reverse = 0;

    printf("Enter a positive number :");
    scanf("%d", &number);

    temp = number;

    while (temp > 0)
    {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp = temp / 10;
    }

    printf("The reverse of %d is %d.", number, reverse);
    return 0;
}