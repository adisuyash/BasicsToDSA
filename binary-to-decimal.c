// Write a program that prompts the user to input a binary number and display its decimal equivalent.

#include<stdio.h>
#include<math.h>
    
int main()
{
    int binary, temp, remainder, decimal=0, i=0;

    printf("Enter binary digits :");
    scanf("%d",&binary);

    temp=binary;

    while (temp>0)
    {
        remainder=temp%10;
        decimal=decimal+(remainder*pow(2,i++));
        temp=temp/10;
    }
    
    printf("Decimal Equivalent of %d is %d",binary,decimal);
    return 0;
}