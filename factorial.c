// Factorial

#include <stdio.h>

int n;
int fact(int i)
{
    if (i == 1)
    {
        return i;
    }
    else
    {
        return i * fact(i - 1); // Using the build function in function itself
    }
}

int main()
{
    printf("Enter number: ");
    scanf("%d", &n);
    int o = fact(n);
    printf("The factorial is %d", o);
}