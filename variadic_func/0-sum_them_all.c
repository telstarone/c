#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...)
{
    va_list nums;
    unsigned int i, sum = 0;

    va_start(nums, n);
    
    for (i = 0; i < n; i++)
        sum += va_arg(nums, int);
    
    va_end(nums);

    return (sum);

}

int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}