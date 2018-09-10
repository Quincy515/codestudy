#include <stdio.h>

double foo(int, double);

int main(int argc, char const *argv[])
{
    
    double k =foo(2.5, 6);
    printf("%lf\n", k);
    return 0;
}

double foo(double a, int b) {
    int something = a * 2 + b;
    return something;
}