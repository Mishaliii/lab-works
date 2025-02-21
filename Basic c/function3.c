#include<stdio.h>
void cube();
void main()
{
cube();
}
void cube()
{
int a,cub=0;
printf("Enter a number:");
scanf("%d",&a);
cub=a*a*a;
printf("Cube of %d is=%d",a,cub);
}

