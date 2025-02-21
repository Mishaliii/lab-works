#include<stdio.h>
void main()
{
  int i,j,sum=0;
  int a[2][3];
  printf("Enter your elements:");
  for(i=0;i<2;i++)
  {
  for(j=0;j<3;j++)
    {
    scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<2;i++)
    {
    for(j=0;j<3;j++)
    {
    printf("%d",a[i][j]);
    sum=sum+a[i][j];
    }
    printf("\n");
  }
printf("sum=%d",sum);
}

