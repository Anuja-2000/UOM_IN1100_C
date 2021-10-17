#include "stdio.h"

void main()
{
    int n;
    printf("Enter limit:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        for (int k = 0; k < n+1 - i ; ++k) {
            printf(" ");
        }
        for (int j = 1; j <=i*2-1; j++) {
            printf("*");
        }
        printf("\n");
    }
}
