// To determine Vowels or Consonents

#include <stdio.h>

int main()
{
    char letter;
    printf("Enter an alphabet :");
    scanf("%c", &letter);

    switch (letter)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("It is a Vowel");
        break;

    default:
        printf("It is a Consonent");
    }
    return 0;
}