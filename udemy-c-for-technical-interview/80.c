#include<stdio.h>

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    a = temp;
}

int main()
{
    int x = 100, y = 200;

    printf("x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("x = %d, y = %d\n", x, y);

    return 0;
}