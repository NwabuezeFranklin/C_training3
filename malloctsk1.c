#include<stdio.h>
#include<stdlib.h>
//No days off
char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int position;

if (size == 0)
{
return (NULL);
}

/*Define values with malloc*/
buffer = (char *) malloc(size * sizeof(c));

if (buffer == 0)
{
return (NULL);
}

else
{
position = 0;
while (position < size) /*While for array*/
{
*(buffer + position) = c;
position++;
}

return (buffer);
}

}

int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    create_array(buffer, 98);
    free(buffer);
    return (0);
}
