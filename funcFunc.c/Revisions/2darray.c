#include<stdio.h>
//

int main()
{
    int j;
    int m[2][3] ={{2,3,4},{2,5,6}};
    int *pyr;
    printf("%d\n", sizeof(pyr));
    pyr = m;
    //printf("%d\n", sizeof(pyr));
    //printf("%d\n", sizeof(m));
    printf("%d,\n", &pyr);
    printf("%d,\n", &m);
    printf("%d,\n", *(&pyr));
    printf("%d,\n", *(*(&pyr)));

    pyr[4] = 9;
    for(int i = 0; i < 2; i++)
    {
        for( j = 0; j < 3; j++)
        {
            printf("%d,", m[i][j]);
        }
        if(j == 3)
        {
            putchar('\n');
        }
        

    }
}