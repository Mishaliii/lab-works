#include<stdio.h>
void sum(int,int);
void main()
{
 int x=10,y=15;
 sum(x,y);
 printf("x=%d,y=%d",x,y);
 }
 void sum(int x,int y)
 {
  x=25;
  y=50;
printf("x=%d,y=%d",x,y);
}
