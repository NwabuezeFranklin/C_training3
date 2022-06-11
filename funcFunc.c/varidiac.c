#include<stdio.h>
#include<stdarg.h>
//Retribution
//No days off


int new(int m, ...)
{
    va_list args;
    va_start(args, m);
    for(int i = 0; i < m; i++)
    {
       int x= va_arg(args,int);
       printf("%d \n", x);
    }
    va_end(args);
}

int main()
{
    new(9,3,3,3,3,4,4,3,4,7,8,9);
}