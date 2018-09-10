#include <stdio.h>

void printMsg(unsigned int n)
{
    if (n == 0)
        return;
    printf("Hello World\n");
    n--;
    printMsg(n); // recursively calling printMsg
}

int main(int argc, char const *argv[])
{
    printMsg(3); // call to printMsg function
    return 0;
}
