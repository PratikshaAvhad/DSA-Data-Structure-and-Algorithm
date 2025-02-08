#include<stdio.h>
#include<stdlib.h>
int main()

	{
	char name[20],pgame[20],p1[20] ;
	int age ;
     int n,i,flag=0,top,mid,buttom;
     FILE *f1;
	  f1=fopen("play.txt","r");
	  if(f1==NULL)
	  {
	  	printf("playear name  not found.....");
	  	exit (0);
	  }
	  printf("enter record to search");
	  scanf("%s",&p1);
	  while(!feof(f1))
	   {
	   fscanf(f1,"%s%s%d",&name,&pgame,&age);
	   i++;
       }
       n=i;
	   top=0;
	  buttom=n-1;
	  while(top<=buttom)
	  {
	  	
	  	mid=((top+buttom)/2);
	     if(strcmp(name,p1)==0)
	     {
			    printf("recored found");
			      printf(" game name=%s",pgame); 
			    printf("  age=%d",age);
	  	       flag=1; 
				 break;
}	  
	

	  else if(strcmp(name,p1)>0) 
	      top=mid+1;
	  else
	     buttom=mid-1;	      
}
         
	  if(flag==0)
	    printf("not found");
	    fclose(f1);
	 
}

