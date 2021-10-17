#include "stdio.h"

int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);

    for (int i = 2; i <= n/2; i++) {
        //printf(" %d",i);
        if (n % i == 0)
        {
            printf("Not a prime");
            return 0;
        }
    }
    printf("It's a prime!");
}

