#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,i,pass,j,temp,t,a[100];
	printf("enter array limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  a[i]=rand();
	  printf("random array is:\n");
	   for(i=0;i<n;i++)
	  {
	    printf("%d\t",a[i]); 
   	  }
   	  printf("\n-----------------------------------------");
	 for(pass=1;pass<n;pass++)
	 {
	 	for(i=0;i<n-pass;i++)
	 	{
	 		if(a[i]>a[i+1])
	 		{
	 			temp=a[i];
	 			a[i]=a[i+1];
	 			a[i+1]=temp;
			 }
		 }
	 }
	 printf("\n sorted array using bubble sort:\n ");
	   for(i=0;i<n;i++)
	   {
	   	printf("%d\t",a[i]);
	   }
     printf("\n---------------------------------------------");
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<i;j++)
	 	{
	 		if(a[i]<a[j])
	 		{
	 			t=a[i];
	 			a[i]=a[j];
	 			a[j]=t;
			 }
		 }
	 }   
	 printf("\n sorted array using insertion sort:\n");
	   for(i=0;i<n;i++)
	   {
	   	printf("%d\t",a[i]);
	   }
}
