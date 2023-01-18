// Recursion & its applications

#include<stdio.h>
int n;
void print(int a){
    if (a==1){
        printf("Recursion\n");
    }
    else{
        printf("Recursion\n");
        print(a-1); // Using the build function in function itself
    }
}

int main()
{
    printf("Enter n:");
    scanf("%d",&n);
    print(n);
}
