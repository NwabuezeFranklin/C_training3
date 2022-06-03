
#include<stdlib.h>
#include<stdio.h>
int main()
{
char* c;
char m;
    printf("%d\n", &c);
    printf("%d\n", &m);
    c = &m;
    printf("%d\n", c);
    int i = 3;
    c = malloc(sizeof(c));
    printf("%d\n", c);

    if (c != 0)
    {
        printf("Memory wasnot assigned\n");

    }
    else{
        printf("Memory was assigned successfully\n");
    }
    free(c);
    printf("%d\n", &c);
}