#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node*link;
}
*temp=NULL,*new_node,*rear=NULL,*front=NULL;
  
void add();
void display();
void delete();

void main()
{
  int ch,op=0;
  do
  {
  printf("\n1.Add  \n2.Display  \n3.Delete  \nEnter your choice: ");
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
    delete();
    break;
  default:
  printf("\nInvalid ");
  }
  printf("\nDo you want to continue(1,0): ");
  scanf("%d",&op);
  }
  while(op==1);
}

void add()
{
  new_node=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter your data: ");
  scanf("%d",&new_node->data);
  new_node->link=NULL;
  if(front==NULL && rear==NULL)
  {
     front=rear=new_node;
  }
  else
  {
    rear->link=new_node;
    rear=new_node;
  }
}

void display()
{
if(front==NULL && rear==NULL)
{
  printf("\nQueue is empty");
}
else
{
  temp=front;
  printf("\nQueue elements : ");
  while(temp!=NULL)
  {
    printf("%d ->",temp->data);
    temp=temp->link;
  }
}
}

void delete()
{
if(front==NULL)
  printf("\nQueue is empty");
else
{
 int key=front->data;
 front=front->link;
  if(front==NULL)
    rear==NULL;
  printf("\n%d deleted",key);
}
}

 
