#include <stdio.h>

int main() {
    float f = 3.14159;
    double d = 3.14159265358979;
    long double ld = 3.14159265358979323846;

    printf("float f = %.5f\n", f);
    printf("double d = %.14lf\n", d);
    printf("long double ld = %.20Lf\n", ld);

    return 0;
}