#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],i,j,n,k,oldi,oldj;
	clrscr();
	printf("Enter The Size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
			a[i][j]=0;
			}
		}
	i=0;
	j=n/2;
	k=1;
	a[i][j]=k;
	while(k<n*n)
		{
			k++; oldi=i; oldj=j;
			i=i-1;
			j=j+1;
			if(i<0)
				{
				i=n-1;
				}
			if(j>n-1)
				{
				j=0;
				}
			if(a[i][j]!=0)
				{
					i=oldi;  j=oldj;
					i=i+1;
				}
			a[i][j]=k;
			printf("%d %d %d\n", i,j,a[i][j]);
		}
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
			printf("\t%d",a[i][j]);
			}
		printf("\n");
	}
	getch();
}


