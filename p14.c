//Write a program to check the program is eligible for vote or not :
#include<stdio.h>
int main()
{
	int age ;
	printf("enter the age of the person:");
	scanf("%d",&age);
	
	if(age >= 18)
    {
    	printf("person is eligible for vote");
    } 
    else
    {
       printf("person is not eligible for vote");
	}
	return 0;
}
