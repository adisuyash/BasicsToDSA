// Power of Any Number

#include <stdio.h>
int a, n;
int power(int x, int y)
{
    if (y == 1)
    {
        return x;
    }
    else
    {
        return x * power(x, y - 1);
    }
}
int main()
{
    printf("Enter Base & Exponent: ");
    scanf("%d %d", &a, &n);
    int o = power(a, n);
    printf("The value is %d", o);
}