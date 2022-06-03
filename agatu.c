#include<stdio.h>
/**
 * No days off
 * soft
 */
int main()
{
    int i, j = 48;
    printf("Guess any number ");
    while(4)
    {
        scanf("%d",&i);
        if (i > j)
        {
            printf("Guess lower\n ");
        }
        else if(i < j)
        {
            printf("Guess higher\n ");
        }
        else
        {
            printf("Congratulations");
            break;
        }
        
    }
    
    return 0;
}