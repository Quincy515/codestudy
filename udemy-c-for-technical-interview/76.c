#include <stdio.h>

int main()
{
    int *p, *q;
    int **k;
    int x = 100;
    p = &x;

    k = &p;
    printf("%d\n", **k);

    **k = **k + 1;
    printf("%d\n", x);

    return 0;
}