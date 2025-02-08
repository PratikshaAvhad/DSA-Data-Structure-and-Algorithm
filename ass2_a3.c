#include<stdio.h>
int main()
{
  int a[100],i,index,n,pass,t,max;
  printf("enter limit");
  scanf("%d",&n);
  printf("enter n number");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(pass=0;pass<n;pass++)
  {
    max=a[pass];
    index=i;
    for(i=pass+1;i<n;i++)
    {
       if(a[i]<max)
       {
	  max=a[i];
	  index=i;
       }
    }
    a[index]=a[pass];
    a[pass]=max;
  }
  printf("\n display number after sorted\n");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}
