#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,n,max,index,pass,a;
  struct person
  {
    int pno;
    int age;
  }p1[100],t;
  FILE *f1;
  f1=fopen("per.tex","r");
  if(f1==NULL)
  {
    printf("file not found");
    exit(0);
  }
  i=0;
  while(!feof(f1))
  {
     fscanf(f1,"%d%d",&p1[i].pno,&p1[i].age);
     i++;
  }
  n=i;
  for(pass=0;pass<n;pass++)
  {
    max=a[pass].age;
    index=pass;
    for(i=pass+1;i<n;i++)
    {
      if(p1[i].age>max)
      {
	max=p1[i].age;
	index=i;
      }
    }
    t=p1[index];
    p1[index]=p1[pass];
    p1[pass]=t;
  }
  printf("disply person info");
  for(i=0;i<n;i++)
  printf("\n%d\t%d",p1[i].pno,p1[i].age);
  getch();
  return 0;
}

