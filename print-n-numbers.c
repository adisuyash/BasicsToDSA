// Write a program to print n numbers

#include<stdio.h>
    
int main()
{
    int count;
    printf("Enter n:");
    scanf("%d",&count);

    for (int i = 0; i < count; i++)
    {
        printf("%d\n",i);
    }
    
    return 0;
}