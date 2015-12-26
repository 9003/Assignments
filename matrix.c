//Self Transpose of a square matrix//
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,a[10][10],i,j,temp;
  printf("Enter the size of matrix");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
	  for(j=0;j<n;j++)
	  {
		  scanf("%d",&a[i][j]);
	  }
  }

  printf("The transpose is\n");
  for(i=0;i<n;i++)
  {
	  for(j=i+1;j<n;j++)
	  {
	    temp=a[i][j];
	    a[i][j]=a[j][i];
	    a[j][i]=temp;
	  }
  }
  for(i=0;i<n;i++)
  {
	  for(j=0;j<n;j++)
	  {
		  printf("%d\t",a[i][j]);
	  }
	  printf("\n");
  }
getch();
}
