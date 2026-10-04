#include <stdio.h>

int main(void)
{
    long double ld;

    scanf("%Lf", &ld);
    double d = ld;
    float f = ld;

    printf("FLOAT: %.6f\nDOUBLE: %.6f\nLDOUBLE: %.6Lf\n", f, d, ld);
    printf("FLOAT+1: %.6f\nDOUBLE+1: %.6f\nLDOUBLE+1: %.6Lf\n",
           f + 1, d + 1, ld + 1);
    return 0;
}
