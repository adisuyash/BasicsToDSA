// Area & Circumference of Circle

#include <stdio.h>

int main()
{
    float radius;
    float area, circumference;

    printf("Enter the radius of the circle :");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    printf("The Area of Circle is :%0.2f", area);
    printf("\nThe Circumference of Circle is :%0.2f", circumference);
    return 0;
}