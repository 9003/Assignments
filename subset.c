#include <stdio.h>
int n,a[10];
void sub(int,int,int);

int main()
{
    int i,k;
    printf("Enter the length");
    scanf("%d", &k);
    printf("Enter the elements: ");
    for(i=0;i<k;i++)
	    {
	    scanf("%d",&a[i]);
	    }
    for(i=0;i<k;i++)
	    {
	      printf("%d",a[i]);
	    }
    n=k;
    printf("The subsets are :\n");
    for (i = 1;i <=n;i++)
      {
	      sub(0, 0, i);
      }
	return 0;

}

void sub(int st, int ind, int num)
{
    int i,j;
    if (ind-st+1==num)
      {
      	if (num==1)
        	{
	           for (i = 0;i < n;i++)
	             {
	              	printf("%d\n", a[i]);
	        }
    	}
	else
	{
	    for (j = ind;j<n;j++)
	      {
		      for (i = st;i < ind;i++)
	        	{
		           printf("%d", a[i]);
	        	}
	      	printf("%d\n", a[j]);
	      }
	    if (st != n - num)
	      {
		      sub(st + 1, st + 1, num);
		    }
	 }
  
  else
    {
	    sub(st, ind + 1, num);
    }
}
