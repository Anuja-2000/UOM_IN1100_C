#include "stdio.h"

void main()
{
    int num,reverse = 0,remainder = 0,original;
    printf("Enter number:");
    scanf("%d",&num);

    original = num;

    while(num != 0){
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num  = num / 10;
    }
    if(original == reverse){
        printf("It is a Palindrome!");
    } else{
        printf("It is not a Palindrome!");
    }


}