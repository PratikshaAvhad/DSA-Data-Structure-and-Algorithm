#include<stdio.h>
#include<conio.h>
int partition(int a[],int lb,int ub)
{
	int pivot=a[lb];
	int i=lb;
	int j=ub;
	int t;
	while(i<j)
	{
		while(a[i]<=pivot&&i<=ub-1)
		{
			i++;
		}
		while(a[j]>=pivot&&j>=lb+1)
		{
			j--;
		}
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	t=a[lb];
	a[lb]=a[j];
	a[j]=t;
	return j;
}
void quicksort(int a[],int lb,int ub)
{
	int j; 
	if(lb<ub)
	{
	    j=partition(a,lb,ub);
		quicksort(a,lb,j-1);
		quicksort(a,j+1,ub);
	}
}
int main()
{
	int a[100],i,n;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter n numbers");
	 for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]); 
	}
	printf("orinal array\n");
	for(i=0;i<n;i++)
	{
       printf("%d\n",a[i]);		
    }	 
    quicksort(a,0,n-1);
    printf("sorted array\n");
    for(i=0;i<n;i++)
    {
    	printf("%d\t",a[i]);
	}
}

