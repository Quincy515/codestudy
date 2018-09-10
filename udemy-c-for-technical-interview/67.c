/**
 * Tower of Hanoi,the classical example of recursion
*/

#include <stdio.h>

/**Implementation of "the tower of hanoi" game using recursive function*/

void toh(int n, int source, int aux, int dest)
{
    if (n == 1) {
        // just pick and place
        printf("Move the disk from tower no: %d to tower no: %d\n", source, dest);
        return;
    }
    // move all n-1 disk to aux
    toh(n-1, source, dest, aux);
    // move the single disk from source to destination
    toh(1, source, aux, dest);
    // move all the n-1 disk kept in auxiliary to destination
    toh(n-1, aux, source, dest);
}

int main(int argc, char const *argv[])
{
    toh(3, 1, 2, 3); // 
    return 0;
}
