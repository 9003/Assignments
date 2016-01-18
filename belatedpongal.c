#include<stdio.h>
#include<unistd.h>
int main()
{
      char a[] = "BELATED HAPPY PONGAL";
	    int i=0;
      while(a[i]!='\0')
         {
		      printf("%c",a[i]);
		      sleep(10);
		      i++;
	        }
      return 0;
}
