#include<stdio.h>
int main()
{

	int n,m,k,r=0,hal,mid=0,size=0,e,z;

	scanf("%d",&n);
	m=n;

	while(m>0)
	{
		m=m/10;
		size++;
	}
	e=0;
	if(size%2==0)
	{
		mid=size/2;
		while(mid>0)

		{
			k=n%10;
			r=k+(r*10);
			n=n/10;
			mid--;
		}

		z=r;
		r=0;

		while(z>0)
		{
			k=z%10;
			r=k+(r*10);
			z=z/10;

		}
		printf("%d%d\n",r,n);
	}

	else
	{
		mid=size/2;
		while(mid>0)
		{
			k=n%10;
			r=k+(r*10);
			n=n/10;
			mid--;
		}

		z=r;
		hal=n%10;
		n=n/10;
		r=0;

		while(z>0)
		{
			k=z%10;
			r=k+(r*10);
			z=z/10;
		}

		printf("%d%d%d",r,hal,n);
	}
	return 0;

}
