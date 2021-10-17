#include "stdio.h"

void main()
{
    int x = 1;
    int total = 0;
    while (x <= 10){
        total = total + x;
        x++;
    }
    printf("Total = %d",total);
}
