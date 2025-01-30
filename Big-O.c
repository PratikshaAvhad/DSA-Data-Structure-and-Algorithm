#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],i,n,num;
	printf("enter linit");
	scanf("%d",&n);
	printf("enter n numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	printf("enter number to search");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			break;
		}
	}
	if(i==n)
	  printf("number not found");
	else
	{
	  printf("number is found");
	  if(i==0)
	    printf("\n Best case");
	  else if(i==n-1)
	    printf("\n Worst case");
	  else
	    printf("\n Average case");		  
    }
}
























