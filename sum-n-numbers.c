// Sum of N natural numbers

#include <stdio.h>

int main()
{
    int N, sum;

    printf("Enter N: ");
    scanf("%d",&N);
    
    // Sum of N naturals numbers is [n(n+1)/2]
    sum = (N * (N + 1)) / 2;

    printf("The sum of %d natural numbers is: %d", N, sum);
    return 0;
}