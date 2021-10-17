#include <stdio.h>
void main()
{
    char grade;
    printf("Enter Grade (A,B,C,D,F):");
    scanf("%c",&grade);

    switch (grade) {
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Well Done");
            break;
        case 'C':
            printf("Well Done");
            break;
        case 'D':
            printf("You Pass");
            break;
        case 'F':
            printf("Better Try Again");
            break;
        default:
            printf("Invalid Grade!");
    }
}

