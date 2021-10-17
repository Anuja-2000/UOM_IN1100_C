#include <stdio.h>
void main()
{
    char a;
    printf("Enter a letter: ");
    scanf("%c",&a);

    switch (a)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("vowel\n");
            break;
        default:
            printf("It's a constant\n");
    }

}


