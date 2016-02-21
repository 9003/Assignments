#include<stdio.h>
int inarray(int [],int);
int main()
{
	int a[7]={2,5,4,10,9,8,5},s;
	int n,k;
  printf("Enter a no");
	scanf("%d",&k);
	n=sizeof(a)/sizeof(int);
	a[n]=-999;
	s=inarray(a,k);
	printf("%d",s);
	return 0;
}
int inarray(int a[],int l)
{
	int i,k,n,t=-999;
	i=0;
	while(a[i]!=t)
	{
		i++;
	}
	n=i;
  for(i=0;i<n;i++)
	{
	
		if(a[i]==l)
		{
		   return i;
		}
	}
	return -1;
}



