/**Fibonacci term*/
#include <stdio.h>

/**
 * write a recursive function to get the nth number of fibonacci series.
 * Fibonacci Series: 1 1 2 3 5 8 13 21 34 55 ... 
*/

long getFibbTerm(int t)
{
    if (t == 1 || t == 2)
        return 1;
    return getFibbTerm(t - 1) + getFibbTerm(t - 2);
}

int main(int argc, char const *argv[])
{
    int t;
    for(t=1; t<=10; t++)
        printf("%ld\n", getFibbTerm(t));    
    return 0;
}
