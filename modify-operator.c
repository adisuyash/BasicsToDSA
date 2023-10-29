// Modify Operators!

#include <stdio.h>
void main()
{

    // pre-increment

    int i = 3, j;
    j = ++i; // value at memory location i is first updated to 3+1 & then stored to j
    printf("%d %d\n", i, j);

    // post-increment

    int a = 3, b;
    b = a++; // value at memory location i is first stored to j & then updated to 3+1
    printf("%d %d\n", a, b);

    printf("\nAs per C Standards,\nBetween two adjacent Sequence Points(;),\na variable can only change its value one time.\nAlso if its value is changed more than one time,\nit's Side Effects will be seen\ni.e value of that variable will vary from compiler to compiler\n\nEXMAPLE :\n\n");

    int m = 5, n;
    printf("%d %d\n", m, n);
    n = ++m + m++;
    printf("%d %d", m, n);
}