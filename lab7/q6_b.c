#include "stdio.h"

void main()
{
    int x = 1;
    int total = 1;
    while (x <= 10){
        printf("%d\n",x);
        total = total * x;
        x++;
    }
    printf("Total = %d",total);
}
