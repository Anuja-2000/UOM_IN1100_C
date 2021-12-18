#include <stdio.h>
#include <string.h>

struct Bank {
    int accNumber;
    char *name;
    float accBalance;
};
struct Bank details[50];

void function();

int main() {
    function();
    return 0;
}

void function() {
    int x = 0,y = 0,z = 0,circulations = 0,temp = 0;
    printf("Enter the number of circulations:");
    scanf("%d",&circulations);
    printf("Enter values for x,y and z:");
    scanf("%d %d %d",&x,&y,&z);
    printf("Initially x = %d y = %d z = %d\n",x,y,z);
    for (int i = 0; i < circulations; i++) {
        temp = x;
        x = z;
        z = y;
        y = temp;
    }
    printf("After right shift x = %d y = %d z = %d",x,y,z);
}