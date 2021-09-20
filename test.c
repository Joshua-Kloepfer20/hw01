#include <stdio.h>

int main() {
    int x = 5;
    long y = 13253645759;
    double t = 1239.1310;
    short z = 15374;
    printf("a number: %d\n", x);
    printf("long number: %ld\n", y);
    printf("double: %lf\n", t);
    printf("short: %hi\n", z);
    printf("big number %ld + small number %hi = %ld\n", y, z, y + z);
    return 0;
}