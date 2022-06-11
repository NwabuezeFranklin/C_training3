#include<stdio.h>
//Retribution
//This will be gooood
int func(int i, int j)
{
    int c = i* j;
    return c;
}
int main()
{
    int c;
    int (*p)(int m, int n);
    p = func;
    c = p(3,4);
    printf("%d",c);

    
}