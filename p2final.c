#include<stdio.h>
int input()
{
  int n;
  printf("enter the number:\n");
  scanf("%d",&n);
  return n;
}
int cmp(int a, int b, int c)
 {
   if(a>b&&a>c)
   {
     return a;
   }
 else if (b>a&&b>c)
 {
   return b;
 }
 else 
 {
   return c;
 }
  }
 void output(int largest)
 {
   printf("the largest no is %d:\n",largest);
 }
 int main()
 {
   int x,y,z,p;
   x=input();
   y=input();
   z=input();
   p=cmp(x,y,z);
   output(p);
   return 0; 
 
 }