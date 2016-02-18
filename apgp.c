#include<stdio.h>
#include<string.h>
int main()
{
	int n,d,s;
	char *c;
	printf("N:");
	scanf("%d",&n);
	printf("S:");
	scanf("%d",&s);
	printf("D:");
	scanf("%d",&d);
	printf("Type:");
	scanf("%s",c);
	if(strcmp(c,"AP")==0)
	{
		while(n>0)
		{
			printf("%d ",s);
			s=s+d;
			n--;
		}
	}
	if(strcmp(c,"GP")==0)
	{
	  while(n>0)
		{
		printf("%d ",s);
		s=s*d;
		n--;
		}

	}
	return 0;
}

