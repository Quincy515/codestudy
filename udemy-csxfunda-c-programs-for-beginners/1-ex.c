#include <stdio.h>
int main()
{
    /*declare variables*/
    int n;

    /*read n*/
    printf("Enter the number: ");
    scanf("%d", &n);

    /*check and display*/
    if(n/10 != 0 && n/100 == 0)
        printf("%d is a two digit number\n", n);
    else
        printf("%d is not a two digit number\n", n);

    return 0;
}
