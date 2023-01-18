// Sum of Digits of a Number

#include<stdio.h>

int n;    
int sum_digits(int i){
    if (i<10){
        return i;
    }
    else{
        return i%10+ sum_digits(i/10); // Using the build function in function itself
    }
}

int main()
{
    printf("Enter number: ");
    scanf("%d",&n);
    int o=sum_digits(n);
    printf("The sum of digits is %d",o);
}