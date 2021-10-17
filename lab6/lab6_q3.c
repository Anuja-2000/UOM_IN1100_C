#include "stdio.h"

void main()
{
    int n = 0;
    int total = 1,a = 0,b = 1;
    printf("Enter fibonacci end position:");
    scanf("%d",&n);

    if (n >= 0){
    switch (n) {
        case 0:
            printf("0");
            break;
        case 1:
            printf("0 1");
            break;
        default:
            printf("0 1");
            for (int i = 2; i <= n; i++) {
                total = a + b;
                printf(" %d", total);
                a = b;
                b = total;
            }
        }
    } else{
        printf("0 or above only");
    }

}
