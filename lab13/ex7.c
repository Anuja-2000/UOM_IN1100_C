#include <stdio.h>
#define is_digit(x) (x>= 0 && x<= 9)? "True":"False"

int main(){
    int num;
    printf("Enter your number:");
    scanf("%d",&num);
    printf("is_hex(x) == %s",is_digit(num));
    return 0;
}