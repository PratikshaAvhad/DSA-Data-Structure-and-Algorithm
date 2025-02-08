#include<stdio.h>
int main()
{
	
	int i,n,f=0,s[20],num;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter number");
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	printf("enter number to search");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(num==s[i])
		  f++;
		  break;
	}
	if(f==0)
	 printf("number not found");
	else
	 printf("number found"); 
}
