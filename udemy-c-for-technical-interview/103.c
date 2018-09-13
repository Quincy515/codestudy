#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...)
{
    int s = 0;
    va_list ap;
    va_start(ap, count);
    int i;
    for(i=1; i<count; i++)
    {
        s += var_arg(ap, int);
    }
    va_end(ap);

    return s;
}

int main()
{
    int k = sum(4, 20, 10, 4, 2);
    printf("Sum = %d\n", k);
    // printf("%d %d %d %c\n", 10, 20, 30, 'a');
    
    return 0;
}