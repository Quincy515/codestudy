/* creating add command */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if(argc == 1)
    {
        printf("Insufficient parameters\n");
        return 0;
    }

    double sum =0.0;
    int i;
    for(i=1; i<argc; i++)
    {
        sum = sum + atof(argv[i]);
    }
    printf("Sum is: %lf\n", sum);
    
    return 0;
}
