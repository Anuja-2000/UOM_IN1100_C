#include <stdio.h>

void main()
{
    int a;
    printf("Enter value: ");
    scanf("%d",&a);

    switch (a) {
        case 20:
            printf("I like Ice Cream");
            break;
        case 30:
            printf("I like Chocolate");
            break;
        case 60:
            printf("I like Apple");
            break;
        default:
            printf("I do not like anything");
    }
}

