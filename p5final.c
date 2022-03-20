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
  float guess=n/2;
  float next =n/guess;
  while (fabs(guess-next)>0.000001)
   {
     guess=(guess+next)/2;
     next=n/guess;
   }
   return guess;
}
void output(float n, float sqrt_result)
{
  printf("the square root of %f is %f",n,sqrt_result);
}
int main()
{
  float a,b;
  a=input();
  b=my_sqrt(a);
 output(a,b);
 return 0;
}