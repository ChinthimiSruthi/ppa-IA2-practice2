#include <stdio.h>
void input_number()
{
  int num;
  printf("Enter a number\n");
  scanf("%d",&num);
}
int is_composite(int n)
{
  int num,i,j=0;
  for(i=1;i<=n;i++)
  {
    if(num % i == 0) 
     j++;
     i++;
  }
  if(j>2)
  {
    printf("%d is a composite number\n",j);
  }
  else
  {
    printf("%d is not a composite number\n",j);
  }
}
void output(int n,int composite)
{
  printf("%d is a composite number\n",composite);
}
int main()
{
  int a,n,composite;
  input_number();
  is_composite(n);
  output(n,composite);
  return 0;
}

