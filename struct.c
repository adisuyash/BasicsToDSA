#include <stdio.h>

union Books
{
    char title[20];
    char author[100];
    float price;
    int pages;
};

int main()
{
    union Books book1;
    printf("Enter Title:");
    scanf("%s", book1.title);
    printf("Enter Author:");
    scanf("%s", book1.author);
    printf("Enter Price:");
    scanf("%f", &book1.price);
    printf("Enter Pages:");
    scanf("%d", &book1.pages);

    // Printing Values
    printf("%s\n", book1.title);
    printf("%s\n", book1.author);
    printf("%f\n", book1.price);
    printf("%d\n", book1.pages);
    return 0;
}
