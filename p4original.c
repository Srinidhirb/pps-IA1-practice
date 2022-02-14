#include<stdio.h>
int inputarraysize()
{
  int n;
  printf("enter array size:\n");
  scanf("%d",&n);
  return n;
}
void inputarray(int n,int a[n])
{
  int i;
  printf("enter the elements of the array:\n");
  for (int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int sumnarray(int n,int a[n])
{
  int i,sum=0;
  for(i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}
void output(int n,int a[n],int sum)
{
  int i;
 printf("the sum of array elements\n"); 
 for (i=0;i<n-1;i++)
{
   printf("%d+",a[i]);
}
printf("%d is %d\n",a[n-1],sum);
}
int main()
{
  int n,sum;
  n=inputarraysize();
  int a[n];
  inputarray(n,a);
  sum= sumnarray(n,a);
  output(n,a,sum);
  return 0;
}