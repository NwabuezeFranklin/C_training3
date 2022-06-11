#include<stdio.h>
#include<stdarg.h>
#include<math.h>
//Retribution
//No days Off

int sum_them_all(const unsigned int n, ...)
{
    int summer = 0;
    
    va_list sum;
    va_start(sum,n);
    if (n == 0)
    return 0;
    for(int i = 0; i < n; i++)
    {
        summer += va_arg(sum,int);
    }
    va_end(sum);
    return summer;

}