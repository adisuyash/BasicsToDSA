#include <stdio.h>
void main()
{
    int max, a, b;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;
    printf("The max of %d & %d is %d", a, b, max);
}