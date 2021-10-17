#include "stdio.h"

void main(){
    int number,power,answer = 1;
    printf("Enter number and power:");
    scanf("%d %d",&number,&power);

    while (power > 0){
        answer = answer * number;
        power--;
    }

    printf("Answer = %d",answer);
}