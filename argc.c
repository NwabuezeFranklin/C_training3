#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
    int i = 0;
    printf("Argc[%d ]\n", argc);
    printf("Argc's First %s\n", argv[0]);

    int mult = 1;
    for(i = 4; i < argc; i++)
    { 
        printf("argv[%d]: %s\n", i, argv[i]);
        mult = mult * atoi(argv[i]);
    }
    printf("Multiplication of: %d\n", mult);
    

    return 0;
}