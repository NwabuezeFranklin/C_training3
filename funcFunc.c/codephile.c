#include<stdio.h>
#include<stdarg.h>
#include<string.h>
//Retribution
//No Dulling
void print(char *items, ...)
{
    int num_args = strlen(items);
    va_list args;
    va_start(args, items);
    for(int i = 0; i < num_args; i++)
    {
        if(items[i] == 'b')
        {
            int j = va_arg(args, int);
            printf("%d\n", j);
        }
        else if(items[i] =='s');
        {
            char* n = va_arg(args, char*);
            printf("%s\n", n);
        }
        
    }
    va_end(args);
}

int main()
{
    print("sb", "strenghtthatagchc",44);
    return 0;
}