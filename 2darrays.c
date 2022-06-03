#include<stdio.h>
//No days off
int main()
{
    int m[2][3] = {{1,2,3}, {3,2,1}};
    int i, j;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d", m[i][j]);
            if (j == 2)
            {
                putchar('\n');
            }
            
        }
    }
    printf("%d", sizeof(m));
}