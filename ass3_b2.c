#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	int i,n;
	char a[30][30];
	printf("enter limit");
	scanf("%d",&n);
	printf("enter n elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the unsorted array");
	for(i=0;i<n;i++)
	{
		printf("%s",a[i]);
	}
	merge_sort(a,0,n-1);
	printf("the sorted arrry");
	for(i=0;i<n;i++)
	{
		printf("%s",a[i]);
	}
}
void merge(char a[],int left,int mid,int right)
{
	int i,j,k;
	char b[10][10];
	i=left;
	j=mid+1;
	k=0;
	while((i<=mid)&&(j<=right))
	{
		if(strcmp(a[j],a[i])>0)
		{
			strcpy(b[k++],a[i++]);
		}
		else
		{
			strcpy(b[k++],a[j++]);
		}
	}
	while(i<=mid)
	{
		strcpy(b[k++],a[i++]);
	}
	while(j<=right)
	{
		strcpy(b[k++],a[j++]);
	}
	for(j=left,k=0;j<=right;j++,k++)
	{
		strcpy(a[j],b[k]);
	}
}
void mergesort(char a[][30],int left,int right)
{
	int mid;
	if(left<right)
	{
		mid=(left+right)/2;
		mergesort(a,left,mid);
		mergesort(a,mid+1,right);
		mergesort(a,left,mid,right);
	}
}

