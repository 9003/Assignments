#include <stdio.h>
int main()
{
   int  index, i, n, val;
   printf("\n enter the size :");
   scanf("%d",&n);
   n++;
   int a[n];
   printf("\n enter the array elements : \n");
   for (i = 0; i < n-1; i++)
   {
        scanf("%d", &a[i]);
   }
   printf("\n enter the position :");
   scanf("%d", &ind);
   printf("\n enter the value to insert :");
   scanf("%d", &val);
   for(i=n-1;i>=ind;i--)
   {
        a[i+1] = a[i];
   }
   a[index] = val;
   for (i=0;i<n;i++)
   {
        printf("%d\t",a[i]);
   }
   return 0;
}
