#include "stdio.h"

int multi(int num1,int num2);

int main(){
    int num1,num2,answer;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);

    answer = multi(num1,num2);
    printf("Answer = %d",answer);

    return 0;
}

int multi(int num1,int num2){
    return num1 * num2;
}