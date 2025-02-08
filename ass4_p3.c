#include<stdio.h>
int main()
{
	FILE *f1;
	char pname[20],player,p1[20];
	int age,n,i,top,mid,bottom,f=0;
    f1=fopen("p10.cpp","r");
    if(f1==NULL)
    {
    	printf("file not found");
    	exit(0);
	}
	printf("enter player name to search");
	scanf("%s",&pname);
	top=0;
	bottom=n-1;
	while(top<=bottom)
	{
		mid=(top+bottom)/2;
		if(pname[mid]==p1)
		{
			f=1;
			break;
		}
		if(p1>pname[mid])
		  top=mid+1;
		else
		  bottom=mid-1;
	}
	printf("\n name of player=%s",pname);
		
	if(f==0)
	  printf("\n player found");
	else
	  printf("\n player not found");
	  
	getch();
}

