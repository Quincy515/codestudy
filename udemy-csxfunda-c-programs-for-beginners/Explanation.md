# Problem Set1

[toc]

## 1. Problem1-2 digit number

> Write a program to check wheter given number is a 2 digit number or not

Hint: User '/' operator

my solution

```c
#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num > 9 && num < 100)
    {
        printf("%d is a two digit number\n", num);
    }
    else
    {
        printf("%d is not a two digit number\n", num);
    }
    return 0;
}
```

teacher solution

```c
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
```

## 2. Problem2-leap year

> Write a program to check wheter a given year is leap year or not

Hint: In a leap year, February month has 29 days. Leap year occurs once in every four year.

my solution

```c
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
```

teacher solution

```c
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
```