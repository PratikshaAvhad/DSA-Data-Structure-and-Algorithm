#include<stdio.h>
#include<stdlib.h>
void selectionsort(char a[10],int n)
{
  int i,j,min;
  char minstr[30];
  for(i=0;i<n-1;i++)
  {
    min=i;
    strcpy(minstr,a[i]);
    for(j=1+1;j<n;j++)
    {
      if(strcmp(minstr,a[j])>0)
      {
	   strcpy(minstr,a[j]);
	   min=j;
      }
    }
    if(min!=i)
    {
       char temp[30];
       strcpy(temp,a[i]);
       strcpy(a[i],a[min]);
       strcpy(a[min],temp);
    }
  }
}
int main()
{
  int n,i;
  printf("enter limit");
  scanf("%d",&n);
  char a[30];
  printf("enter array element");
  for(i=0;i<n;i++)
  {
    scanf("%s",&a[i]);
  }
  selectionsort(a[30],n);
  printf("\n sorted array=");
  for(i=0;i<n;i++)
  {
    printf("%s\t",a[i]);
  }
  
}

