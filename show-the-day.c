/* Write a program that prompts the user to input a number. Program should display the corresponding days to the number.

For example if user type 1 the output should be sunday.
If user type 7 the output should be saturday. */

#include <stdio.h>

int main()
{
    int day;

    printf("Enter day number 1-7 :");
    scanf("%d", &day);

    /* Determine the corresponding week's day */
    switch (day)
    {
    case 1:
        printf("Sunday");
        break;

    case 2:
        printf("Monday");
        break;

    case 3:
        printf("Tuesday");
        break;

    case 4:
        printf("Wednesday");
        break;

    case 5:
        printf("Thursday");
        break;

    case 6:
        printf("Friday");
        break;

    case 7:
        printf("Saturday");
        break;

    default:
        printf("Invalid input");
    }

    return 0;
}