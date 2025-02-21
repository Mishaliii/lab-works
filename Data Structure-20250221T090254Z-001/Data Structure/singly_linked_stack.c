#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node*link;
}*temp=NULL,*new_node,*top=0;

void add();
void display();
void pop();
void linearsearch();

int main()
{
    int ch,op=0;
    do
    {
    printf("\n1.Add  \n2.Display  \n3.Delete  \n4.Linear Search  \nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            add();
            break;
        case 2:
            display();
            break;
        case 3:
            pop();
            break;
        case 4:
            linearsearch();
            break;
        case 5:
            default:
            printf("\nInvalid choice");
            break;
    }
    printf("\nDo you want to continue(1,0): ");
    scanf("%d",&op);
    }while(op==1);
}

void add()
{
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data: ");
    scanf("%d",&new_node->data);
    if(top==0)
    {
        top=new_node;
        new_node->link = NULL;
    }
    else
    {
        new_node->link=top;
        top=new_node;
    }
}

void display()
{
    if(top==0)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nStack elements are:\n");
        temp=top;
        while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
    }
}

void pop()
{
    int key;
    if(top==0)
    {
        printf("\nStack is empty");
    }
    else
    {
        key=top->data;
        top=top->link;
        printf("%d popped",key);
    }
}

void linearsearch()
{
    int item,f=0,pos=1;
    printf("\nEnter the element to be searched: ");
    scanf("%d",&item);
    if(top==0)
    {
        printf("\nStack is empty");
    }
    else
    {
        temp=top;
        while(temp!=NULL)
        {
            if(item==temp->data)
            {
                printf("\n%d found at position %d",item,pos);
                f=1;
                break;
            }
            pos++;
            temp=temp->link;
        }
        if(f==0)
        {
            printf("\n%d not found",item);
        }
            
    }
}

