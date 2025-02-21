#include <stdio.h>
void find_minimum(); 
void find_maximum();
void count_numbers();
void reverse_order();
void addition();
void mean_number();
void search_elements();
void main() 
{
    int array[20],size,ch;
    char con;
    printf("Enter size of array:");
    scanf("%d",&size);
    printf("Enter elements:");
    for(int i=0;i<size;i++)
    {
    scanf("%d",&array[i]);
    }
    do
    {
    printf("1.Minimum\n 2.Maximum\n 3.count\n 4.Reverse\n 5.Addition\n 6.Mean\n 7.search\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
          find_minimum(array,size);
          break;
    case 2:
          find_maximum(array,size);
          break;
    case 3:
          count_numbers(array,size);
          break;
    case 4:
           reverse_order(array,size);
           break;
   case 5:
          addition(array,size);
          break;
   case 6:
          mean_number(array,size);
          break;
   case 7:
          search_elements(array,size);
          break;
   default:
          printf("Invalid command");
          break;
   }
   printf("Do you want to continue(Y/y):");
   scanf(" %c",&con);
  }while(con=='Y'||con=='y');
}
void find_minimum(int array[], int size) 
{
    int min_value = array[0];

    for (int i = 1; i < size; i++) 
    {
        if (array[i] < min_value) 
        {
            min_value = array[i]; 
        }
    }

    printf("minimum value=%d\n",min_value);
}
void find_maximum(int array[],int size)
{
    int max_value=array[0];
    for (int i=1;i<size;    i++)
    {
      if(array[i]>max_value)
      {
        max_value=array[i];
        }
      }
      printf("maximum value=%d\n",max_value);
}
void count_numbers(int array[],int size)
{
 int count=size;
 printf("Count of numbers=%d\n",count);
}
void reverse_order(int array[],int size)
{
printf("Reverse order:");
 for(int i=size-1;i>=0;i--)
 {
 printf("%d\t",array[i]);
}
}
void addition(int array[],int size)
{
int sum=array[0];
for (int i=1;i<size;i++)
  {
    sum=sum+array[i];
    }
    printf("sum=%d\n",sum);
}
void mean_number(int array[],int size)
{
printf("Enter the element to be searched:");
{
int mean;
int sum=array[0];
for(int i=1;i<size;i++)
{
 sum=sum+array[i];
 mean=sum/size;
 }
 printf("Mean=%d\n",mean);
}
}
void search_elements(int array[],int size)
{
int element;
printf("Enter the element to be searched:");
scanf("%d",&element);
for(int i=0;i<size;i++)
 {
  if(array[i]==element)
  {
  printf("item found at %d\n",i);
  }
}
}
