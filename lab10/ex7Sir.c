#include "stdio.h"
#include "math.h"

int main() {
    float x[12] = {1, 0, 3.2, 4, 1, 5, 7, 0, 2, 1.1, -1, 4.1};
    float y[12] = {3, 5, 0, -1, 0.5, -1, -2, 3, 4, 1, 8.1, 2};

    float xysum = 0, xsum = 0, ysum = 0, xsqsum = 0, ysqsum = 0, num, den1, den2, d, r, byx, xbar, ybar;
    for (int i = 0; i < 12; i++) {
        xysum += x[i] * y[1];
        xsum += x[i];
        ysum += y[i];
        xsqsum = xsqsum + x[i] * x[i];
        ysqsum = ysqsum + y[i] * y[i];
    }

    num = xysum - xsum * ysum / 12;
    den1 = xsqsum - xsum * xsum / 12;
    den2 = ysqsum - ysum * ysum / 12;
    d = sqrtf(den1 * den2);
    r = num / d;
    byx = num / den1;
    xbar = xsum / 12;
    ybar = ysum / 12;
    printf("r = %0.2f\n", r);
    printf("Regression equation of y on x is y  %f = %f (x  %f)", -ybar, byx, -xbar);

    return 0;
}