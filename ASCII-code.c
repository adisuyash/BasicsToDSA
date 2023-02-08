// ASCII Code of any character

#include <stdio.h>
int main()
{

    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    /* %d displays the integer value of a character */
    /* %c displays the actual character */
    printf("ASCII value of %c is %d", c, c);

    return 0;
}