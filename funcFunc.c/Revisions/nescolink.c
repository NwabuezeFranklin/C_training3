#include <stdio.h>
#include<stdlib.h>
//Retribution
//Singly linked lists

struct node
{
    int data;
    struct node *next;
};

typedef struct node node;

int main()
{
    node *head;
    head = malloc(sizeof(node));
    head->data = 34;
    head->next = NULL;

    node *try;
    try = malloc(sizeof(node));
    try->data = 39;
    try->next = NULL;
    head->next= try;

    try = malloc(sizeof(node));
    (*try).data = 23;
    try -> next = NULL;
    head -> next -> next = try;

    try = malloc(sizeof(node));
    (*try).data = 24;
    try -> next = NULL;
    head -> next -> next-> next = try;


    node *me;
    me = malloc(sizeof(struct node));
    me -> data = 38;
    me -> next = NULL;
    try -> next = me;

    try = malloc(sizeof(node));
    (*try).data = 23;
    try -> next = NULL;
    head -> next -> next -> next -> next -> next = try;

    while( head != NULL)
    {
        printf("%d,", head->data);
        head = head->next;
    }

}