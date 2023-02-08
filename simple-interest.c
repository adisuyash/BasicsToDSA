// Simple Interest Calculator
#include <stdio.h>

int main()
{
    float principle, rate, time, simple_interest, amount;

    printf("Enter the principle :");
    scanf("%f", &principle);
    printf("Enter the rate :");
    scanf("%f", &rate);
    printf("Enter the time :");
    scanf("%f", &time);

    /* Calculating Simple Interest */
    simple_interest = principle * rate * time / 100;
    amount = principle + simple_interest;

    printf("Simple interest is %0.2f\n", simple_interest);
    printf("Amount is %0.2f", amount);

    return 0;
}