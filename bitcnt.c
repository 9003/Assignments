#include<stdio.h>
int main()
{
     int n,s,cnt=0;
     printf("Input :");
     scanf("%d",&n);
     s=n;
     if(s==0)
     {
         cnt++;
     }
     while(s)
     {
         s=s/2;
         cnt++;
     }
     printf("Output\n",cnt);
     return 0;
}
