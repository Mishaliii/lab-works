#include<stdio.h>
#define max_size 100
char queue[max_size][25];
int front=-1,rear=-1;

void enqueue();
void dequeue();
void display();


int main()
{
  int ch,op=0;
  do
  {
    printf("\n1.Add  \n2.Display  \n3.Delete  \nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
        enqueue();
        break;
      case 2:
        display();
        break;
      case 3:
        dequeue();
        break;

        default:
        printf("\nInvalid choice");
        break;
      }
      printf("\nDo you want to continue(1,0): ");
      scanf("%d",&op);
    }
    while(op==1);
  }
  
  void enqueue()
  {
    if((rear+1)%max_size==front)
    {
      printf("\nPrinting queue is full");
    }
    else if(front==-1)
    {
      front=0;
    }
      rear=((rear+1)%max_size);
      printf("\nEnter your job: ");
      scanf("%s",queue[rear]);
  }
  
  void display()
  {
    if(rear==-1 && front==-1)
    {
      printf("\nPrinter queue is empty");
    }
    else
    {
      printf("\nQueue contents are:\n");
     int i = front;
    while (1) 
    {
        printf("%s\n", queue[i]);
        if (i == rear) break; 
        i = (i + 1) % max_size;
    }
  }
}
  
  void dequeue()
  {
    if(rear==-1 && front==-1)
    {
      printf("\nPrinter queue is empty");
    }
    else
    {
    char *item;
    item=queue[front];
    if(front==rear)
    {
      front=rear=-1;
    }
    else
    {
      front=(front+1)%max_size;
      printf("\n%s deleted",item);
    }
  }
}
