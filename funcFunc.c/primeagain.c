#include<stdio.h>
//retribution
int main()
{
    int i , j;
    for (i = 2; i <= 149; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            
        }
        if(i == j)
        {
            printf("%d\n", i);
        }
        

    }
    return 0;
}