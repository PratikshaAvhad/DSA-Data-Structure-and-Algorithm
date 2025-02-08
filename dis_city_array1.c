#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s1[20][20],i,n;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter city names in an array");
	 for(i=0;i<n;i++)
	  {
	  	scanf("%s",&s1[i]);
	  }
	  printf("\n Display city names\n");
	    for(i=0;i<n;i++)
	    printf("%s\t",s1[i]);
	    
}




















