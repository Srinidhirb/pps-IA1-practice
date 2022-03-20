#include<stdio.h>
typedef struct complex
{
  float real,imaginary;
}
Complex;
Complex input_complex()
{
  Complex n;
  printf("enter the number:\n");
  scanf("%f%f",&n.real,&n.imaginary);
  return n; 
}
Complex add(Complex a, Complex b)
{
  Complex c;
  c.real=a.real+b.real;
  c.imaginary=a.imaginary+b.imaginary;
  return c;
}
void output(Complex a, Complex b, Complex c)
{
  printf("(%f+%fi) + (%f+%fi) = (%f+%fi)",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}
int main()
{
  Complex x,y,z;
  x=input_complex();
  y=input_complex();
  z=add(x,y);
  output(x,y,z);
  return 0;
}