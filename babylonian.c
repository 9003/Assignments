#include<stdio.h>
int main()
{
  int n;
  float x;
  float y=1;
  float e=0.000001;
  printf("Enter the number\n");
  scanf("%d",&n);
  x=n;
  while((x-y)>e)
  {
    x=(x+y)/2;
    y=n/x;
  }
  printf("The square root of the number is %f\n",x);
  return 0;
}
