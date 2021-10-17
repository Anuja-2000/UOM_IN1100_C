#include "stdio.h"

int main() {
    int salaries[10], count = 0;
    printf("Enter salaries of 10 employees:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &salaries[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (salaries[i] >= 50000 && salaries[i] <= 75000) {
            count++;
        }
    }

    printf("No of salaries in range of 50000 to 75000 = %d",count);
    return 0;
}