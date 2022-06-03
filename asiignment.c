#include<stdio.h>
/**
 * No days off
 */
int main()
{
    int i, j;
    printf("Enter numbers   ");
    //printf("Enter number 2 ");
    scanf("%d %d", &i, &j);
    if(i > j)
    {
        printf("The first is Bigger");
    }
    else if( j > i)
    {
        printf("The second is bigger");
    }
    else
    {
        printf("Numbers are same");
    }
}