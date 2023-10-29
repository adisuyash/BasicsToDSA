/* ASCII Code of any character
The range of ASCII values for uppercase letters A-Z is 65-90,
and the range for lowercase letters a-z is 97-122. */

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