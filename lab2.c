#include <stdio.h>
#include <math.h>
long double factorial2(long double x) {
    if (x == 0) {
        return 1;
    }
    long double a = 1;
    for (x; x > 0; x = x - 2) {
        a = a * x;
    }
    return a;
}
long double T(long double x) {
    long double a1 = 0;
    long double a2 = 0;
    for (long double k = 0; k <= 10; k++) {
        a1 += ((pow(x, 2 * k + 1)) / (factorial2(2 * k + 1)));
        a2 += ((pow(x, 2 * k)) / (factorial2(2 * k)));
    }
    return (a1 / a2);
}

int main() {
    int y;
    scanf_s("%d", &y);
    long double z = (7 * T(0.25) + 2 * T(1 + y));
    long double u = (6 - T(y*y - 1));
    long double l = z / u;
    printf("%lf", l);
    return 0;
}