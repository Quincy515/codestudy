#include <stdio.h>
/*print the binary equivalent of a signed integer value.*/

void printBinary(int n)
{
    int i;
    unsigned k = 1 << 31;
    for (i=0; i<sizeof(int)*8; ++i)
    {
        if((n & (k>>i)) == (k>>i))
            printf("1");
        else
            printf("0");
        if((i+1)%8 == 0)
            printf(" ");
    }
}

int main()
{
    int x = 6;
    printf("x before complement: ");
    printBinary(x);
    x = ~x + 1;
    printf("\n");
    printf("x after complement: ");
    printBinary(x);
    printf("\n");
    printf("x = %d\n", x);
    
    return 0;
}