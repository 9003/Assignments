#include<stdio.h>
#include<ctype.h>
int main()
{
	char str[10];
	int i,count[26],k,temp=0;
	printf("Enter the string\n");
	scanf("%s",str);
	for(i=0;i<25;i++)
	{
		count[i]=0;
	}
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
		  k=toascii(str[i])-'A';
		}
		if(count[k]==0)
		{
			count[k]++;
			temp++;
		}

	}
	printf("\nOutput:%d",temp);
	return 0;
}


