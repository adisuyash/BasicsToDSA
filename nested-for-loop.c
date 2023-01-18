// nested for loop

#include<stdio.h>
    
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= 3*i; j++)
        {
            printf("LiT");
        }
        
    }
    
    return 0;
}