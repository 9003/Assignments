#include<stdio.h>
int add(int,int,int);
int main()
{
	int a,b,c,d[3],sum,e,f,g;
	printf("Enter the no s");
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",a+b+c);                //Using three variables
	printf("Enter three nos");
	scanf("%d%d%d",&d[0],&d[1],&d[2]);
	printf("%d",d[0]+d[1]+d[2]);       //Using array
	printf("Enter three nos");
	scanf("%d%d%d",&e,&f,&g);
	sum=add(e,f,g);                    // Function call
	printf("%d",sum);
	return 0;
}
int add(int e,int f,int g)
{
	return e+f+g;
}
