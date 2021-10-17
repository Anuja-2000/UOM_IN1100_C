#include <stdio.h>

void main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    switch (num) {
        case 1:
            printf("1 - Monday");
            break;
        case 2:
            printf("2 - Tuesday");
            break;
        case 3:
            printf("3 - Wednesday");
            break;
        case 4:
            printf("4 - Thursday");
            break;
        case 5:
            printf("5 - Friday");
            break;
        case 6:
            printf("6 - Saturday");
            break;
        case 7:
            printf("7 - Sunday");
            break;
        default:
            printf("Invalid Input!");
    }
}
