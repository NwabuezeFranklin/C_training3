#include<stdio.h>
#include<stdlib.h>
//No dasy off

struct node
{
    int m;
    struct node *link;
};

void printer(struct node *p)
{
    while(p != NULL)
    {
        printf("%d ", p->m);
       p = p->link;
    }
}

int main()
{
    struct node *head = NULL;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    

    one->m = 3;
    two->m = 4;
    three->m = 5;

    one->link = two;
    two->link = three;
    three->link = NULL;
    head=one;
    printer(head);





}