/**storage class, the auto storage class*/
#include <stdio.h>

/**
 * 1. auto 2. static 3. extern 4. register
 * 1. scope 2. life time 3. inital value
 * Scope defines the block from which the variable is accessible.
 * Life time is how long the variable remain allocated in primary memory
 * Initial value is the value that the variable is assigned immediately after allocation
*/

void test1() {
    int k;
    printf("k = %d\n", k);
    k = 20;
    printf("k = %d\n", k);
}

void test() {
    auto int var;
    printf("var = %d\n", var);
    var++;
    printf("var = %d\n", var);
}


int main(int argc, char const *argv[])
{
    test1();
    test();
    
    return 0;
}
