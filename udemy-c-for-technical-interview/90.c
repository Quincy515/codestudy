/**Dynamic memory allocation-calloc function*/
#include <stdio.h>
#include <stdlib.h>
// malloc, calloc, realloc

int main()
{
    int *p;
    int n;
    printf("Enter how many integers: ");
    scanf("%d", &n);
    p = (int*)calloc(n * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate meory\n Exiting the program\n");
        exit(1);
    }

    // use the allocated space pointed by p for keeping values

    int i;
    for(i=0; i<n; i++)
    {
        printf("Next Number: ");
        scanf("%d", p+i);
    }

    printf("Content of the array: ");
    for (i=0; i<n; i++)
    {
        printf("%4d", *(p+i));
    }
    free(p);

    return 0;
}
