#include "stdio.h"
#include "math.h"

int main() {
    double Zx, Zy, Zxy, Zx2, Zy2, y, x;
    printf("Enter x value:");
    scanf("%lf", &x);
    int n = 12;
    double dataArray[2][12] = {{1, 0, 3.2, 4,  1,   5,  7,  0, 2, 1.1, -1,  4.1},
                               {3, 5, 0,   -1, 0.5, -1, -2, 3, 4, 1,   8.1, 2}};
    for (int i = 0; i < n; i++) {
        Zx = Zx + dataArray[0][i];
        Zx2 = Zx2 + pow(dataArray[0][i], 2);
        Zy = Zy + dataArray[1][i];
        Zy2 = Zy2 + (dataArray[1][i]) * (dataArray[1][i]);
        Zxy = Zxy + (dataArray[0][i]) * (dataArray[1][i]);
    }

    //printf("ZX = %0.2f\nZx2 = %0.2f\nZy = %0.2f\nZy2 = %0.2f\nZxy = %0.2f\n", Zx, Zx2, Zy, Zy2, Zxy);
    double r = ((Zxy) - ((Zx * Zy) / n)) / (sqrt((Zx2 - ((Zx * Zx) / n)) * ((Zy2) - ((Zy * Zy) / n))));
    printf("r = %0.2f", r);

    double byx = ((Zxy) - ((Zx * Zy) / n)) / (Zx2 - ((Zx * Zx) / n));

    y = (byx * (x - (Zx / n))) + (Zy / n);
    printf("\nPredicted y = %0.2f",y);
    return 0;
}