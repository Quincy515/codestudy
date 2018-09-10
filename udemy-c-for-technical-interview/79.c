#include <stdio.h>

int main()
{
    int x = 300;
    char *k;
    int *p;

    k = (char *)&x;
    p = &x;
    printf("%d %d\n", *p, *k); // 300 44
    k = k+1;
    printf("%d %d\n", *p, *k); // 300 1

    return 0;
}