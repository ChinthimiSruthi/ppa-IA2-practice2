#include <stdio.h>
int input_side()
{
  int a;
  printf("Enter a value\n");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a,int b,int c)
{
  if(a==b && b==c)
  {
    return a;
  }
  else if(a!=b && b!=c && a!=c)
  {
    return b;
  }
  else 
  {
    return c;
  }
}
void output(int a,int b,int c,int scalene)
{
  printf("a triangle with unequal sides %d,%d and %d is %d\n",a,b,c,scalene);
}
int main()
{
  int a,b,c,scalene;
  a=input_side();
  b=input_side();
  c=input_side();
  check_scalene(a,b,c);
  output(a,b,c,scalene);
  return 0;
}
