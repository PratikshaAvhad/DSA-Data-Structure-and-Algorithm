#include<stdio.h>
int main()
{
  int a[100],n,i,pass,t,c=0;
  printf("enter limit");
  scanf("%d",&n);
  printf("enter n number");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(pass=1;pass<n;pass++)
  {
    for(i=1;i<n-pass;i++)
    {
      if(a[i]>a[i+1])
      {
	   t=a[i];
	   a[i]=a[i+1];
	   a[i+1]=t;
	   c++;
      }
    }
  }
  printf("\n sorted number\n");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
  printf("swap number count=%d",c);
}
