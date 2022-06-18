#include<stdio.h>
#include<stdlib.h>
//No days off
//Retribution

struct node
{
    int data;
    struct node *linker;
};

struct node *end(struct node *head, int m)
{
    struct node *ptr;
    ptr = malloc(sizeof(struct node));
    ptr-> data = m;
    ptr-> linker = NULL;

    head->linker=ptr;
    return ptr;

}


int main()
{
    struct node *head = malloc(sizeof(struct node));
    head ->data = 34;
    head ->linker = NULL;

    struct node *ptr = head;
    ptr = end(ptr, 87);
    ptr = end(ptr, 90);
    ptr = end(ptr, 65);

    ptr = head;

    while(ptr!= NULL)
    {
        printf("%d", ptr-> data);
        ptr = ptr->linker;
    }
}



