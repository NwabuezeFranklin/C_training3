#include<stdio.h>
int main()
{
    int a[] = { 8,3,4};
    int *ptr;
    ptr = a;
    ptr[1] = 6;
    int y = sizeof(a)/ sizeof(a[0]);
    printf("%d\n", y);
    for(int i = 0; i < y; i++)
    {
        printf("%d\n", ptr[i]);
    }
}