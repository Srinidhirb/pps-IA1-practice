#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("enter the number:\n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float result,temp;
  result=sqrt(n);
  return result;
}
void output(float n, float sqrt_result)
{
  printf("the square root of %f is : %f\n",n,sqrt_result);
}
int main()
{
  int a,b;
  a=input();
b=my_sqrt(a);
output(a,b);
return 0;
}