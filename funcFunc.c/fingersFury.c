#include<stdio.h>
#include<stdarg.h>
//Retribution
//No Days Off


int azula(int m, ...)
{
    va_list zuko;
    va_start(zuko,m);
    for(int i=0; i < m; i++)
    {
        int c = va_arg(zuko,int);
        printf("[%d]: %d \n",i,c);
    }
    va_end(zuko);

}
int main()
{
    azula(5,1,2,3,4,5);
}