#include<stdio.h>
int main()
{
	int a[100],i,n,num;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter n number");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter number to search");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
		   printf("number is found\n");
	    }
		else
		{
		  printf("\n number is not found"); 
	    }
	}

}

