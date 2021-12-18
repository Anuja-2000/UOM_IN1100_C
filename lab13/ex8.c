#include <stdio.h>
#define is_digit(x) (x>= 0 && x<= 9)? "True":"False"
#define is_AtoF(x) (x>='a' && x<='f') || ((x>='A' && x<='F'))? "True" : "False"
#define is_hex(x) (is_digit(x) == "True" || is_AtoF(x) == "False")? "True":"False"
int main(){
    char num;
    printf("Enter your character:");
    scanf("%c",&num);
    printf("is_hex(x) == %s",is_hex(num));
    return 0;
}