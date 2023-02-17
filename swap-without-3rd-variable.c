// 

#include<stdio.h>
    
int main()
{
    int a,b;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    printf("Before Swap: num1=%d, num2=%d\n",a,b);

    // Swapping Values without 3rd Variable
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swap: num1=%d, num2=%d",a,b);

    return 0;
}