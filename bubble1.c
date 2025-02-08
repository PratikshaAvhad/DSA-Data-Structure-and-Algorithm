#include<stdio.h>
int main()
{
	int a[]={51,10,22,88,23,20,19,01};
	int i,pass,t,n=8;
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	ptintf("\n sorted array");
	 for(i=0;i<n;i++)
	  printf("%d\t",a[i]);
}











