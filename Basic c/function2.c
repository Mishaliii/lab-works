#include<stdio.h>
void sum();
void sub();
void mul();
void main()
{
 sum();
 sub();
 mul();
}
 void sum()
 {
  int a,b,sum=0;
  printf("Enter 2 numbers for addition:");
  scanf("%d %d",&a,&b);
  sum=a+b;
  printf("sum=%d\n",sum);
  }
  void sub()
  {
  int a,b,sub=0;
  printf("Enter 2 numbers for substraction:");
  scanf("%d %d",&a,&b);
  sub=a-b;
  printf("sub=%d\n",sub);
  }
  void mul()
  {
  int a,b,mul;
  printf("Enter 2 numbers for multiplication:");
  scanf("%d %d",&a,&b);
  mul=a*b;
  printf("product=%d\n",mul);
  }
