#include <stdio.h>
int main()
{
    char a[100];
    int i=0,n,j,k,rem;
    printf("Number:");
    scanf("%d\n",&n);
    printf("Base:");
    scanf("%d\n",&k);
    while(n!=0)
    {
    	rem=n%k;
    	if(rem<10)
    	{
    		a[i++]=rem+'0';
    	}
    	else
    	{
    		a[i++]=rem+55;
    	}
    	n=n/k;
    }
    for(j=i-1;j>=0;j--)
    {
    	printf("Output s %c",a[j]);
    }
	return 0;
}
