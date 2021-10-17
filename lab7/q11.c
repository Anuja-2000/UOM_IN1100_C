#include "stdio.h"
#include "math.h"
// armstrong number :- 153 =(get digit count = 3); 1^3 + 5^3 + 3^3
//                     7456 =(get digit count = 4); 7^4 + 4^4 + 5^4 + 6^4

void main()
{
    int num,lastDigit = 0,numc = 0,numc1 = 0,digitCount = 0;
    printf("Enter number:");
    scanf("%d",&num);
    numc = num;
    while(numc != 0){
       numc = numc / 10;
       digitCount++;
    }
    numc = num;
    numc1 = num;
    while(numc1 != 0){
        lastDigit = numc1 % 10;
        numc = numc + pow(lastDigit,digitCount);
        numc1 = numc1 / 10;
    }

    if(num == numc){
        printf("It is an Armstrong number!");
    } else{
        printf("It's not an Armstrong number!");
    }

}