#include "stdio.h"

void main()
{
    int x = 2;
    int count = 0;
    while (x <= 100){
        count++;
        x = x + 2;
    }
    printf("Total = %d", count);
}
