#include "stdio.h"

void main()
{
    int x = 2,total = 0;
    while (x <= 50){
        total = total + x;
        x = x + 2;
    }
    printf("Total = %d",total);
}
