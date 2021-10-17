#include "stdio.h"

void main()
{
    int x = 3;
    int total = 0;
    while (x <= 99){
        total = total + x;
        x = x + 2;
    }
    printf("Total = %d",total);
}
