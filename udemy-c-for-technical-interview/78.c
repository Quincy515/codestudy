#include <stdio.h>

int main()
{
    int x = 10;
    int *p;
    p = &x;

    printf("Content of p: %lu\n", p);
    p = p + 1;
    printf("Content of p: %lu\n", p);

    double *i = (double *)10000;
    double *j = (double *)2000;
    printf("i - j = %d\n", i-j); // (10000-2000)/8=1000

    return 0;
}