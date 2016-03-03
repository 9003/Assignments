#include <stdio.h>
int main()
{
   int  t,ind, i, n, val,a[50];
   printf("enter the size :");
   scanf("%d",&n);
   n++;
   t=a[n];
   printf("enter the array elements : \n");
   for (i = 0; i < n-1; i++)
   {
	scanf("%d", &a[i]);
   }
   printf("\n enter the pos :");
   scanf("%d", &ind);
   printf("\n enter the value to insert :");
   scanf("%d", &val);
   for(i=n-1;i>=ind;i--)
   {
	a[i+1] = a[i];
   }
   a[ind] = val;
   for (i=0;i<n;i++)
   {
	printf("%d\t",a[i]);
   }
   return 0;
}
