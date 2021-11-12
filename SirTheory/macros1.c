#include <stdio.h>

#define UPPER 10
#define AND &&
#define CONDITION (a > 25 AND a < 50)
#define AREA(r) (3.14*r*r)
#define MIN(x, y)(x>y?y:x)
#define LINE for(i = 0;i<10;i++) \
printf("%d\n",i)
int main() {
//    for (int i = 0; i < UPPER; ++i) {
//        printf("%d\n",i);
//    }

//    int a, num1, num2;
//    float r1,r2;
//    printf("Enter r1 and r2:");
//    scanf("%f %f", &r1, &r2);
//
//    printf("AREA of r1 = %.2f\n", AREA(r1));
//    printf("AREA of r2 = %.2f", AREA(r2));
/*    if (CONDITION) {
        printf("Within range");
    } else {
        printf("Out of range");
    }*/

//int i;
//LINE;

#ifdef INPUT
    printf("Defined\n");
#endif
    printf("Rest of the program");

    return 0;
}