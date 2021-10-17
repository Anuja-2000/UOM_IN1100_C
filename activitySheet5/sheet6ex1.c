#include "stdio.h"
void readMarks(float marks[]);

void printMarks(float marks[]);

float totalMarks(float marks[]);

int main(){
    float marks[5];
    readMarks(marks);
    printMarks(marks);

    float total = totalMarks(marks);
    printf("%0.2f",total);
}

void readMarks(float marks[]){
    for (int i = 0; i < 5; ++i) {
        printf("Enter marks:");
        scanf("%f",&marks[i]);
    }
}


void printMarks(float marks[]) {
    for (int i = 0; i < 5; ++i) {
        printf("%0.2f\n",marks[i]);
    }

}

float totalMarks(float marks[]) {
    float sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum = sum + marks[i];
    }
    return sum;
}