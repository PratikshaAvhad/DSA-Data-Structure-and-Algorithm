#include<stdio.h>
int main()
{
	int a[100],i,n;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter n elements in an array");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 printf("\n disply array\n");
	  for(i=0;i<n;i++)
	  {
	   printf("%d\t",a[i]);
      }
}













