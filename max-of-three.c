// Program to show maximum out of three numbers

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter no 1:");
    scanf("%d", &num1);

    printf("Enter no 2:");
    scanf("%d", &num2);

    printf("Enter no 3:");
    scanf("%d", &num3);

    // Finding Max of the three numbers

    if ((num1 > num2) && (num1 > num3))
    {
        printf("Max no is %d", num1);
    }
    else if ((num2 > num3))
    {
        printf("Max no is %d", num2);
    }
    else
    {
        printf("Max no is %d", num3);
    }
    return 0;
}