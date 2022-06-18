#include<stdio.h>
#include<stdlib.h>
//retribution
int main()
{
    char *i;
    printf("Enter an number  + / -\n  ");
    scanf("%s", &i);
    int a = 3, b = 4, n;
    if (i == "*")
    {
        n = a * b;
        printf("%d", n);
    }else if(i == "+")
    {
        n = a + b;
        printf("%d", n);
    }else if (i == "/")
    {
        n = a / b;
        printf("%d", n);
    }
    return 0;

}