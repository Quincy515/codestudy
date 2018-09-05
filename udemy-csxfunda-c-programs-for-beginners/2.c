#include <stdio.h>

int main()
{
    // declare variables
    int n;

    // read n
    printf("Enter the year: ");
    scanf("%d", &n);

    // check and display
    if(n%4 == 0 && n%100 != 0)
        printf("%d is a leap year\n", n);
    else if(n%400 == 0)
        printf("%d is a leap year\n", n);
    else
        printf("%d is not a leap year\n", n);

    return 0;
}
