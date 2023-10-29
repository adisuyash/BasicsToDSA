// Swapping of Two Numbers

#include <stdio.h>

int main()
{
    int num1, num2, temp;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("Before Swap: num1=%d, num2=%d\n", num1, num2);

    // Swapping Values via 3rd Variable
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After Swap: num1=%d, num2=%d", num1, num2);
    return 0;
}