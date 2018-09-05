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
    printf("********************************\n");
    return 0;
}

