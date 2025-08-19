#include<stdio.h>
#include<conio.h>
void main()
{
 int i;
     for(i=1;i<=50;i++)
      { printf("Book id : %d",i);
	  if(i%5==0){
	   printf(" -> Special Edition");
	   }
	   printf("\n");
      }
      getch();
}
