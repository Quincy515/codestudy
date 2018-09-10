#include <stdio.h>
#include <math.h>
/**
 * develop a function to test Armstrong Number, A number is Armstrong number if
 * the sum of each digit raised to the power of number of digits (in that number)
 * equals to the number itself
 * 1634 is Armstrong number as 1^4 + 6^4 + 3^4 +4^4 = 1634
 * 371 is Armstrong as 3^3 + 7^3 +1^3 = 371
*/

int getTotalDigits(int);
int isArmstrong(int);

int getTotalDigits(int n)
{
    int count = 0;

    while(n>0) {
        n = n/10;
        count ++;
    }

    return count;
}

int isArmstrong(int n) 
{
    int sum = 0, temp = n, count = getTotalDigits(n);

    while(n>0) { // temp = n = 371 37 3
        sum += pow(n%10, count); // 371%10=1 0+1^3 37%10=7 0+1^3+7^3 3%10=3 0+1^3+7^3+3^3
        n = n/10; // 371/10=37 37/10=3 3/10=0
    }

    return temp == sum;
}

int main(int argc, char const *argv[])
{
    // printf("%d\n", getTotalDigits(1234) == 4);
    int i;
    for(i=1; i<50000; i++){
        if(isArmstrong(i))
            printf("%d is Armstrong Number\n", i);
    }

    return 0;
}
