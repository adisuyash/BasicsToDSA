// 

#include<stdio.h>

static int i=2;
extern int i;

int main()
{
    // Misc Static / Entern

    printf("Misc Static / Entern\n");
    printf("Output is 2 i.e. %d\n",i); 
    
    // Misc Printf
    printf("Misc Printf\n");
    int a=printf("%d",a,printf("%d",printf("%d",printf("%d",12))));
    return 0;
}