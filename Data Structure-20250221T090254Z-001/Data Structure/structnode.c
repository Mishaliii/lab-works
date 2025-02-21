#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
};
struct node *head=0,*new_node,*temp;
int choice=1;
void main()
{
  while(choice)
  {
    new_node=(struct node *) malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&new_node->data);
    new_node->next=0;
    if(head==0)
    {
    temp=head=new_node;
    }
    else
      {
      temp->next=new_node;
      temp=new_node;
      }
      printf("Do you want to continue(0,1)");
      scanf("%d",&choice);
 }

//display all
printf("Linked list:");
temp=head;
while(temp!=NULL)
{
    printf("%d->",temp->data);
    temp=temp->next;
}
  printf("NULL");
}
