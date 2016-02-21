#include<stdio.h>
int inarray(int [],int);
int main()
{
	int a[10],s;
	int n,k,m,i;
	printf("Enter the size");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter a no");
	scanf("%d",&k);
	n=m;
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


