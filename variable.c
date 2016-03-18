#include<stdio.h>
#include<string.h>

int main()
{
	char str[10],temp[10],str1[10][10],count=0;
	int i,n,k,j,flag;
	clrscr();
	printf ("enter a string");
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if((str[i]>=35)&&(str[i]<=47))
		{
		str[i]='_';
		}
	}
	k=0; i=0;
	while (str[i]=='_')
	{
	i++;
	}
	while(i<n)
	{
		j=0; flag=0;
		while((str[i]!='_')&&(i<n))
		{
			temp[j]=str[i];
			j++;
			i++;
			flag=1;
		}
		if(flag==1)
		{
		temp[j]='\0';
		strcpy(str1[k],temp);
		k++;
		}
		i++;
	}
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if((strcmp(str1[i],"dup")!=0)&&(strcmp(str1[j],"dup")!=0)&&(strcmp(str1[i],str1[j])==0))
			{
			strcpy(str1[j],"dup");
			}
		}
	       if(strcmp(str1[i],"dup")!=0)
		count++;
	 }



	printf("count=%d\n",count);   
	return 0;
}

