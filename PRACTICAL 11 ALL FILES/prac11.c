#include<stdio.h>
int main()
{


int marks;
printf("enter your  marks");
scanf("%d",&marks);
(marks>=90)? printf("grade a") : (marks>=80 && marks<90) ? printf("grade b") : (marks>=70 && marks<80) ? printf("grade c ") : (marks>=60 && marks<70) ? printf("grade d") : printf("grade fail") ;



}
//code written by rushit shah
