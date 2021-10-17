#include <stdio.h>

void main()
{
    int code;
    printf("Enter Telephone code:");
    scanf("%d",&code);

    switch (code) {
        case 11:
            printf("11 - Delhi");
            break;
        case 22:
            printf("22 - Mumbai");
            break;
        case 33:
            printf("33 - Kolkata");
            break;
        case 40:
            printf("40 - Chennai");
            break;
        default:
            printf("Area code is not recognized!");
    }
}

