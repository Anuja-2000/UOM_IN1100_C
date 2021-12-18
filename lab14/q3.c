#include <stdio.h>

void inputData(int data[][4], int rowSize, int colSize);

void display(int data[][4], int rowSize, int colSize);

int findHighestStudent(int data[][4], int rowSize, int colSize, int moduleID);

int main() {
    int marks[4][4], s;
    inputData(marks, 4, 4);
    display(marks, 4, 4);
    s = findHighestStudent(marks, 4, 4, 1002);
    printf("Highest marks for Module ID 1002 : Studen %d\n", s);
    s = findHighestStudent(marks, 4, 4, 1003);
    printf("Highest marks for Module ID 1003 : Studen %d\n", s);
    return 0;
}

void inputData(int data[][4], int rowSize, int colSize) {
    for (int i = 0; i < rowSize; ++i) {
        printf("Module %d :\n", i + 1000);
        for (int j = 0; j < colSize; ++j) {
            printf("Enter Marks of Student %d:", j + 1);
            scanf("%d", &data[j][i]);
        }
    }
}

void display(int data[][4], int rowSize, int colSize) {
    printf("\t\t\t\t");
    for (int i = 1000; i < 1004; ++i) {
        printf("%d\t", i);
    }
    printf("\n");
    for (int i = 0; i < rowSize; ++i) {
        printf("Student %d\t", i + 1);
        for (int j = 0; j < colSize; ++j) {
            printf("%d\t", data[i][j]);
        }
        printf("\n");
    }
}

int findHighestStudent(int data[][4], int rowSize, int colSize, int moduleID) {
    int max, student = 1;
    max = data[0][moduleID - 1000];
    for (int i = 1; i < rowSize; ++i) {
        if (data[i][moduleID - 1000] > max) {
            max = data[i][moduleID - 1000];
            student = i + 1;
        }
    }
    return student;
}