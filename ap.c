#include<stdio.h>
int main()
{
	int n,s,d;
	printf("N:");
	scanf("%d",&n);
	printf("S:");
	scanf("%d",&s);
	printf("D:");
	scanf("%d",&d);
	while(n>0)
	{
		printf("%d\t",s);
		s=s+d;
		n--;
	}
	return 0;
}
