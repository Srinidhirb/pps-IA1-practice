#include<stdio.h>
int input()
{
  int n;
  printf("enter the number:\n");
  scanf("%d",&n);
 return n;
}
int cmp(int a, int b, int c )
{
  if(a>b&&a>c)
   {
     return a;
   }
   else if(b>a&&b>c)
   {
     return b;
   }
   else
   {
     return c;
   }
}
void output(int a, int b, int c, int large)
{
  printf("the largest no of %d,%d,%d is %d",a,b,c,large);
}
int main()
{
  int a,b,c,d;
  a=input();
  b=input();
  c=input();
  d=cmp(a,b,c);
  output(a,b,c,d);
  return 0;
}

