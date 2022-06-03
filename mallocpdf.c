#include<stdio.h>
#include<stdlib.h>
/**
 * No days off
 * Alright
 */
int main()
{
    int i = 10;
    char* r;
    r = malloc(i * sizeof(char));
    r[0] = 'e';
    r[1] = 'a';
    r[2] = 't';
    r[3] = 'e';
    r[4] = 'r';
    r[5] ='\0';
    printf("%d\n",&r);
    printf("%s\n", r);
    free(r);
    for (i = 0; i <= 5; i++)
    {
        printf("%d\t %c\n", &r[i], r[i]);

    }

    return 0;
}