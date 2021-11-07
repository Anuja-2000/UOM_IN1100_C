#include <stdio.h>

struct Distance {
    int feet;
    float inch;
};

int main() {
    struct Distance d, e;
    printf("Enter information for 1st distance\nEnter feet : ");
    scanf("%d", &d.feet);
    printf("Enter inch : ");
    scanf("%f", &d.inch);

    printf("Enter information for 2nd distance\nEnter feet : ");
    scanf("%d", &e.feet);
    printf("Enter inch : ");
    scanf("%f", &e.inch);

    int feetSum,x;
    float inchSum;

    feetSum = d.feet + e.feet;
    inchSum = d.inch + e.inch;

    if(inchSum > 12.00){
        x = (int)inchSum/12;
        feetSum += x;
        inchSum -= x*12;
    }

    printf("Sum of Distances : %d' - %.2f\"",feetSum,inchSum);
    return 0;
}