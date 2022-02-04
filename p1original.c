#include<stdio.h>
void input(int *a, int *b)
{
  printf("enter the numbers:\n");
  scanf("%d%d",a,b);
}
void add(int a, int b, int *sum)
{
  *sum=a+b;
}
void output(int a, int b, int sum)
{
  printf("the sum of %d and %d is : %d",a,b,sum);
}
int main()
{
  int a,b,c;
  input(&a,&b);
  add(a,b,&c);
  output(a,b,c);
  return 0;
}
