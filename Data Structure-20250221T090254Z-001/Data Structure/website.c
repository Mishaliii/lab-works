#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define max_size 100
char st[max_size][25];
int top=-1;

void add();
void delete();
void search();
void display();

void main()
{
  int ch,op;
  do
  {
    printf("\n1.add \n2.delete \n3.search \n4.display \n5.stop \n6.Enter choice");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
        add();
        break;
      case 2:
        delete();
        break;  printf("Enter the website: ");

      case 3:
        search();
        break;
      case 4:
        display();
        break;
      case 5:
        return;
      default:
      printf("\ninvalid choice");
      }
      printf("\nEnter your choice(1,0): ");
      scanf("%d",&op);
      }
      while(op==1);
      }

void add()
{
  if(top==max_size-1)
  {
    printf("overflow");
  }
  else
  {
  top++;
  printf("\nEnter the website: ");
  scanf("%s", st[top]);
  printf(" %s added", st[top]);
  }
}

void display()
{
  if(top==-1)
  {
    printf("\nHistory is empty");
  }
  else
  {
    printf("\nHistory of visited websites: ");
    for(int i=top;i>=0;i--)
    {
      printf("\n%s",st[i]);
    }
  }
}

void delete()
{ 
  if(top==-1)
  {
  printf("\nHistory is empty");
  }
  else
  {
  printf("\nHistory deleted");
  top--;
  }
}

void search()
{
char key[25];
int f=0;
  if(top==-1)
  {
  printf("\nHistory is empty to search");
  }
  else
  {
  printf("\nEnter the website to be searched: ");
  scanf("%s", key);
  for(int i=top;i>=0;i--)
  {
    if(!strcmp(st[i],key))
    {
      f=1;
      printf("\nWebsite found: %s",st[i]);
    }
    }
    if(f==0)
    {
    printf("\n %s not found in history",key);
    }
  }
}



