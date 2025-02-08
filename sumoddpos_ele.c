#include<stdio.h>
int main()
{
	int a[100],i,n,s=0;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter array elements");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 for(i=0;i<n;i++)
	 {
	 	if(i%2==1)
	 	  s=s+a[i];
	 }
	 printf("sum of odd position elements=%d",s);
}

























