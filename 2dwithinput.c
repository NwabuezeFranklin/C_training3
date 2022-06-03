#include<stdio.h>
//No days off. Semper fidelis
int main()
{
    int i, j;
    int m[3][4];
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("Enter the array accordinly:[%d][%d] ",i,j );
            scanf("%d", &m[i][j]);
        }
        
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d ", m[i][j]);
        
            if(j == 3)
            {
                putchar('\n');
            }
        }
    }
    

}