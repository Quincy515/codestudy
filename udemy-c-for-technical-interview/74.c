/**Conception of stack and heap memory*/
#include <stdio.h>

void funB()
{
    int a, b;
}

void funA()
{
    int p, q;
    funB();
}

int main()
{
    int x;

    funA();

    funB();

    return 0;
}