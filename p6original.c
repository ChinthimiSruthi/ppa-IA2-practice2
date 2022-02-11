#include <stdio.h>
void input_string(char *a)
{
  printf("Enter a string\n");
  scanf("%s",a);
}
int str_reverse(char *a)
{
  int i,count=0;
  while
}
void output(char *a,char reversa)
{
  int i,j=0;
  for(i=0;a[i]!='\0';i++)
  {
    printf("%c",a[i]);
  }
}
int main()
{
  char a[20];
  int reversa;
  input_string(a);
  str_reverse(a);
  output(a,reversa);
}