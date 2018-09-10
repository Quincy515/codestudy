#include <stdio.h>

void printNo(unsigned int n)
{
    if (n == 0)
        return;
    
    printNo(n-1);
    printf("%d\n", n);
}

int main(int argc, char const *argv[])
{
    printNo(3);
    return 0;
}
