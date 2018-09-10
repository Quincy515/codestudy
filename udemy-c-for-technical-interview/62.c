// recursion 递归
#include <stdio.h>

int fun2()
{
    int k;
    // some processing
    return k;

}

void fun1()
{
    int p = 10;
    p = fun2();
    p++;
    printf(" p = %d\n", p);
}

void fun3() 
{

}

int main(int argc, char const *argv[])
{
    int i, sum = 0, x[] = {10, 20, 30};

    fun1 (); // calling function fun1

    for (i=0; i<3; i++)
        sum += x[i];
    
    printf("Sum = %4d\n", sum);
    fun3();

    return 0;
}
