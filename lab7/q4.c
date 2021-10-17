#include "stdio.h"

void main()
{
    int x = 1;
    unsigned long total = 1;
    while (x <= 30){
        total = total * x;
        x = x + 2;
    }
    printf("Total = %lu",total);
}
