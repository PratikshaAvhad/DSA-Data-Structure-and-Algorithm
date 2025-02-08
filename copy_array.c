#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],b[100],i,n;
	printf("enter array limit");
	scanf("%d",&n);
	printf("\n enter array elements");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 printf("\n original array \n");
	  for(i=0;i<n;i++)
	   printf("%d\t",a[i]);
	   
	  for(i=0;i<n;i++)
	    {
	    	b[i]=a[i];
		}  
	printf("\n copy array \n");
	  for(i=0;i<n;i++)
	   printf("%d\t",b[i]);	   
}







