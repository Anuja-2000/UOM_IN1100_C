#include "stdio.h"

int main(){
    int x = 7;
    int y[5];
    for (int i = 0; i < 5; ++i) {
        printf("Enter value of block %d:",i);
        scanf("%d",&y[i]);
    }

    for (int i = 0; i < 5; ++i) {
        printf("Value for block %d is %X\n",i,&y[i]);
    }

    return 0;
}