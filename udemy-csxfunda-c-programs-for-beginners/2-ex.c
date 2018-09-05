#include <stdio.h>

int main()
{
    /*variable declaration*/
    int year;

    /*read year*/
    printf("Enter the year: ");
    scanf("%d", &year);

    /*check leap year or not*/
    if( (year%4 == 0 && year%100 != 0) || (year%400 == 0) )
        printf("%d is leap year\n", year);
    else
        printf("%d is not leap year\n", year);

    return 0;
}
