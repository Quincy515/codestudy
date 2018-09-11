#include<stdio.h>

int main()
{
    void *vp;
    int x = 100;
    vp = &x;

    printf("%d\n", *((int *)vp));

    return 0;
}
