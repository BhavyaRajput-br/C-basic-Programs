//Write a program to check whether a person is eligible to vote (age = 18). 
#include<stdio.h>
int main()
{
	int age;
	printf("enter the age:");
	scanf("%d",&age);
	if (age>=18)
	{
		printf("person is elgible for vote: "); 
	}
	else
	{
		printf("person is not eligible for vote:");
	}
}
	

