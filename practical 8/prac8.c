#include<stdio.h>
#include<conio.h>
void main()
{
	int age;

	printf("Enter your Age: ");
	scanf("%d",&age);
	printf("\n");
	(age>=18)? printf("You are Eligible.") : printf("You are not Eligible.");

}
