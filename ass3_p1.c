#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[]={888,111,666,444,222,999,333};
	printf("\n array is:");
	// for(i=0;i<7;i++)
//	 {
//	 	printf("%d\t",a[i]);
//	 }
	Merge_sort(a,0,6);
	 printf("sorted no=");
	  for(i=0;i<7;i++)
	  	printf("%d\t",a[i]);
	  
}
void merge_sort(int a[],int left,int right)
{
	int mid;
	if(left<right)
	{
		mid=(left+right)/2;
		merge_sort(a,left,mid);
		merge_sort(mid+1,a,right);
		merge(a,left,right,mid);
	}
}
void merge(int a[],int left,int right,int mid)
{
	int i,j,k;
	int n1=(mid-left)+1;
	int n2=(right-mid);
	
	int a1=n1;
	int a2=n2;
	
	for(i=0;i<n1;i++)
	{
		a1[i]=a[left+i];
	}
	for(i=0;i<n2;i++)
	{
		a2[i]=a[mid+1+i];
	}
	i=0,j=0,k=left;
	while(i<n1 && j<n2)
	{
		if(a1[i]<a2[j])
		{
			a[k++]=a1[i++];
		}
		else
		   a[k++]=a2[j++];
	}
	while(i<n1)
	{
		a[k++]=a1[i++];
	}
	while(j>n2)
	{
		a[k++]=a2[j++];
	}
}


