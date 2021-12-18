#include <stdio.h>

void inputData(double account[][3], int rowSize);

void CalcInterest(double account[][3], int rowSize);

void CalcBalance(double account[][3], int rowSize);

double findTotBalance(double account[][3], int rowSize);

void print(double account[][3], int rowSize);

int main() {
    double ac[10][3];
    inputData(ac, 10);
    CalcInterest(ac, 10);
    CalcBalance(ac, 10);
    double totalAmount = findTotBalance(ac, 10);
    printf("Total Balance: %.2lf\n", totalAmount);
    print(ac, 10);
    return 0;
}

void inputData(double account[][3], int rowSize) {
    for (int i = 0; i < rowSize; ++i) {
        printf("Enter initial amount %d: ", i + 1);
        scanf("%lf", &account[i][0]);
    }
}

void CalcInterest(double account[][3], int rowSize) {
    for (int i = 0; i < rowSize; ++i) {
        account[i][1] = account[i][0] * 0.045;
    }
}

void CalcBalance(double account[][3], int rowSize) {
    for (int i = 0; i < rowSize; ++i) {
        account[i][2] = account[i][0] + account[i][1];
    }
}

double findTotBalance(double account[][3], int rowSize) {
    double total = 0;
    for (int i = 0; i < rowSize; ++i) {
        total = total + account[i][2];
    }
    return total;
}

void print(double account[][3], int rowSize) {
    for (int i = 0; i < rowSize; ++i) {
        printf("Account %d Balance = %.2lf\n", (i + 1), account[i][2]);
    }
}