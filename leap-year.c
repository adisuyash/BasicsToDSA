// Leap Year Determination

#include <stdio.h>

int main()
{
    int year;

    printf("Enter a Year:");
    scanf("%d", &year);

    /* What a Leap Year is ?
    - Divisible by 4
    - Must not be a Century Year (i.e. 2100, 2300 etc.)
    - Century Year must be divisible by 400 */

    if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }

    return 0;
    
}