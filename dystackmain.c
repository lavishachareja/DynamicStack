#include <stdio.h>
#include <stdlib.h>
#include "dystack.h"
void main()
{
    int n, e, p, choice;
    initstack();
    NODE N;
    do
    {
        printf("\n\n1:Push\n2:Pop\n3:Peek\n4:Exit\n");
        printf("Please Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter number to be added to stack : ");
            scanf("%d",&n);
            push(n);
            break;
            case 2:
            if(top==NULL)
            {
                printf("Stack Underflow");
            }
            else
            {
                e=pop();
                printf("Element popped = %d",e);
            }
            break;
            case 3:
            if(top==NULL)
            {
                printf("Stack is Empty");
            }
            else
            {
                p=peek(top);
                printf("Element present at the top = %d",p);
            }
            break;
        }
    }
    while(choice!=4);
}