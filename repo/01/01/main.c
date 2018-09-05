#include <stdio.h>
#include <stdlib.h>

// 逆序输出子函数的声明
void Inverse_array(int array_in[], int array_out[], int array_len);

int main(int argc, const char * argv[])
{
    int array_input[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array_output[10] = {0};
    int loop_value = 0;
    
    // 调用排序子函数进行数组的逆序排列
    Inverse_array(array_input, array_output, 9);
    
    // 分别打印出排序前和排序后的数组
    printf("排序前的数组\n");
    for(loop_value=0; loop_value<10; loop_value++)
    {
        printf("%d", array_input[loop_value]);
    }
    printf("\n");
    
    printf("排序后的数组\n");
    for (loop_value=0; loop_value<10; loop_value++)
    {
        printf("%d", array_output[loop_value]);
    }
    printf("\n");
    
    return 0;
}


void Inverse_array(int array_in[], int array_out[], int array_len)
{
    int loop_value = 0;
    
    // 循环进行数组元素的对换
    for (loop_value=0; loop_value<=array_len; loop_value++)
    {
        array_out[array_len-loop_value] = array_in[loop_value]; // 第i个元素和第n-i个元素的值互换
    }
}
