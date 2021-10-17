#include "stdio.h"

int main() {
    int ages[10], count = 0;
    printf("Enter ages of 10 students:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &ages[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (ages[i] >= 17 && ages[i] <= 19) {
            count++;
        }
    }

    printf("No of students in age range of 17 to 19 = %d",count);
    return 0;
}