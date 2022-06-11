#include<stdio.h>
#include<stdlib.h>
//Retribution
//No days off
int *Add(int* a, int* b)
{
    int c =(*a) + (*b);
    return &c; // could not return address of local variable.
}
void p()
{
    printf("studying, Everyday\n");
}
int main()
{
    int a = 2, b = 4;
    int *ptr = Add(&a,&b);
    p();
    printf("Sum =%d\n", ptr);
    
}