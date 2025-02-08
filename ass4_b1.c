#include<stdio.h>
int main()
{
	char s[20],c[20];
	int i,n,f=0;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter city name");
	for(i=0;i<n;i++)
	{
		scanf("%s",&s[i]);
	}
	printf("enter city to search");
	scanf("%s",&c);
	for(i=0;i<n;i++)
	{
		if(strcmp(s[i],c)==0)
		{
		  f=1;
		  break;
	    }
	}
	if(f==0)
	 printf("city not found");
	else
	 printf("city found"); 
}
