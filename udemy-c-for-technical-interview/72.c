#include <stdio.h>
// int gVar; // global variable

void test() {
    extern int gVar;
    printf("gVar = %d\n", gVar);
    gVar = 20;
}


int main()
{
    extern int gVar;
    printf("gVar = %d\n", gVar);
    gVar = 10;
    test();
    printf("gVar = %d\n", gVar);    
    return 0;
}

int gVar; // global variable