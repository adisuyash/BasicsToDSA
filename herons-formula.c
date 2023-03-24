// Area of Triangle using Heron's Formula

#include <math.h>
#include <stdio.h>

int main()
{
    float a, b, c, s, area;

    printf("Enter the length of side 1 :");
    scanf("%f", &a); 
    printf("Enter the length of side 2 :");
    scanf("%f", &b);
    printf("Enter the length of side 3 :");
    scanf("%f", &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("\nThe area of the triangle is %0.2f", area);
}