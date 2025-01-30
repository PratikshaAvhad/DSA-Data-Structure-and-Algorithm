#include<stdio.h>
#include<conio.h>
int main()
{
  int a[100],i,n,max1,max2,sum;
  printf("Enter array limit");
  scanf("%d",&n);
  printf("\n enter array element");
   for(i=0;i<n;i++)
   {
   	 scanf("%d",&a[i]);
   }	
   max1=a[0];
    for(i=0;i<n;i++)
    {
      if(max1<a[i])
      {
      	max1=a[i];
	  }
	  
    }
    printf("\n first largest element is =%d",max1);
     max2=a[0];
      for(i=0;i<n;i++)
      {
      	if(a[i]!=max1)
      	{
      		if(max2<a[i])
      		{
      		  max2=a[i];	
			}
		}
	  }
    printf("\n second largest element is=%d",max2);
    sum=max1+max2;
     printf("\n sum of 2 largest elements=%d",sum);
}



