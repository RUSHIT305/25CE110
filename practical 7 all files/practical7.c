 #include<stdio.h>
 #define ticket 100
 int main()
 {
 int age;
 printf("enter your age");
 scanf("%d",&age);
 if(age<=10){
 printf("your entry is free");
 }
 else{
 printf("your entry price is : %d",ticket);
 }
 return 0;
 }
