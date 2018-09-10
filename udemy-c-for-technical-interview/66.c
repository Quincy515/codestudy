#include <stdio.h>
/**
 *  benefit of recursion, when exactly we need to write recursion. 
 * 递归的好处，当我们确切地需要写递归时。
*/
void decToBin(unsigned int n) 
{
    if(n == 1) {
        printf("1");
        return;
    }
    decToBin(n/2);
    printf("%d", n%2);
}

int main(int argc, char const *argv[])
{
    decToBin(10);
    
    return 0;
}
