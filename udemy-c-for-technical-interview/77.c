#include <stdio.h>

int main()
{
    char *k;
    int *p;
    float *f;
    double *d;
    printf("%lu %lu %lu %lu\n", sizeof(k), sizeof(p), sizeof(f), sizeof(d));
    printf("%lu %lu %lu %lu\n", sizeof(*k), sizeof(*p), sizeof(*f), sizeof(*d));

    return 0;
}
