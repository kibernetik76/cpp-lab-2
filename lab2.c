
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
    long double up = 0;
    long double under = 0;
    for (long double k = 0; k <= 10; k++) {
        up += ((pow(x, 2 * k + 1)) / (factorial2(2 * k + 1)));
        under += ((pow(x, 2 * k)) / (factorial2(2 * k)));
    }
    return (up / under);
}

int main() {
    int y;
    scanf("%d", &y);
    long double up2 = (7 * T(0.25) + 2 * T(1 + y));
    long double under2 = (6 - T(y*y - 1));
    double finish = up2 / under2;
    
    printf("%lf", finish);
    return 0;
}