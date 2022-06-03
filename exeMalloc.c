#include<stdio.h>
#include<stdlib.h>
/**
 * No days off
 * Steady
 */
int main ()
{
    int i, j;
    printf("Enter a number\n");
    scanf("%d", &j);
    printf("%d\n", &j);
    printf("%d\n", &i);

    int* a = (int*) malloc(j * sizeof(int));
    for(i = 0; i <= j; i++)
    {
        a[i] = i + 1;
    }
    for(i = 0; i <= j; i++)
    {
        printf("%d, ", a[i]);
        printf("%d\n", a+i);

    }
    return 0;
}