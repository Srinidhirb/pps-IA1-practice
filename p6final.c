#include<stdio.h>
#include<string.h>
void input_two_string(char *a, char *b)
{
  printf("enter the string:\n");
  scanf("%s%s",a,b);
}
int stringcmp(char *a, char *b)
{
  int i;
  for(i=0;a[i]!='\0'&& b[i]!='\0';i++)
  {
    if(a[i]>b[i])
    {
      return 1;
    }
    else if(a[i]<b[i])
    {
      return -1;
    }
    else
    {
      return 0;
    }
  }
}
void output(char *a, char *b, int result)
{
  if(result==1)
  {
    printf("%s is greater then %s\n",a,b);
  }
  else if (result==-1)
  {
    printf("%s is greater then %s\n",b,a);
  }
  else 
  {
    printf("%s is equal to  %s\n",a,b);
  }
}
int main ()
{
  char a[100],b[100];
  input_two_string(a,b);
  int result=strcmp(a,b);
  output(a,b,result);
  return 0;
}