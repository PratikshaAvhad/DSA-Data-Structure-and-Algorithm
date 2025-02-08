#include<stdio.h>
#include<conio.h>
int main()
{
	int a[]={56,23,11,67,12,89,2};
    int i,temp,pass;
    printf("the input array is:\n ");
     for(i=0;i<7;i++)
     printf("%d\t",a[i]);
     for(pass=1;pass<7;pass++)
     {
     	for(i=0;i<7-pass;i++)
       {
     	  if(a[i]>a[i+1])
     	{
     		temp=a[i];
     		a[i]=a[i+1];
     		a[i+1]=temp;
		 }
	   }
     }
     printf("\n the sorted array  is:\n ");
      for(i=0;i<7;i++)
      {
      	printf("%d\t",a[i]);
	  }
}


