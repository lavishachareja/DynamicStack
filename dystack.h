#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;
    struct node *next;
}NODE;
NODE *top;

void initstack()
{
    top=NULL;
}

void push(int num)
{
    NODE *newnode;
    newnode=(NODE *)malloc(sizeof(NODE));
    newnode->info=num;
    newnode->next=top;
    top=newnode;
}

int pop()
{
    NODE *temp;
    int num;
    temp=top;
    num=top->info;
    top=top->next;
    free(temp);
    return num;
}

int peek(NODE *top)
{
    return top->info;
}