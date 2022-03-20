   
#include<stdio.h>
#include<string.h>
void input_two_string(char *a, char *b)
{
  printf("enter the string\n");
  scanf("%s%s",a,b);
}
int  stringcmp(char *a, char *b)
{
  int i=0;
  // !=
  while(a[i]==b[i])
  {
   i++; 
  }
  return a[i]-b[i];
}
void output(char *a, char *b, int result)
{
  if(result>0)
  printf("%s is greater than %s",a,b);
 else if(result<0)
 printf("%s is greater than %s",b,a);
 else 
 printf("%s is equal to %s",a,b);
}
int main()
{
  char a[100], b[100];
  input_two_string(a,b);
  int result=  stringcmp(a,b);
  output(a,b,result);
  return 0;
}