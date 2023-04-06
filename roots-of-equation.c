/* The roots of the quadratic equation ax2 + bx + c = 0, a ne 0 are given by the following formula:

quadratic equation formula
In this formula, the term b2 - 4ac is called the discriminant. If b2 - 4ac = 0, then the equation has two equal roots. If b2 - 4ac > 0, the equation has two real roots. If b2 - 4ac < 0, the equation has two complex roots. Write a program that prompts the user to input the value of a (the coefficient of x2), b (the coefficient of x), and c (the constant term) and outputs the roots of the quadratic equation. */

#include<stdio.h>
#include<math.h>
    
int main()
{
    int a,b,c;
    int D,equal_root,root1,root2;

    // Taking coefficients of the quadratic equation
    printf("Enter the coefficient of x2:");
    scanf("%d",&a);
    printf("Enter the coefficient of x:");
    scanf("%d",&b);
    printf("Enter the constant c:");
    scanf("%d",&c);


    printf("The Quadratic Equation formed from your inputs is:\n");
    printf("%dx2+%dx+%d=0\n",a,b,c);

    // Discriminant calculation 
    D=(b*b)-4*a*c;

    if (D<0)
    {
        printf("Real roots doesn't exist");
    }
    else
    {
        if (D==0)
        {
            equal_root=-b/(2*a);
            printf("Both roots of the equation are Real & Equal to %d",equal_root);
        }
        else
        {
            int root1=(-b+sqrt(D))/(2*a);
            int root2=(-b-sqrt(D))/(2*a);
            printf("Both roots of the equation are Real & Unequal");
            printf("One root is %d & other is %d",root1,root2);
        }
        
        
    }

    return 0;
}