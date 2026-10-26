//wap to check ihe either the student pass, fail or suplementary
#include<stdio.h>
int main()
{
	int fail;
	printf("enter the number of failed students");
	scanf("%d",&fail);
	if(fail==0)
	{
		printf("student is pass");
	}
	else if (fail<=2)
	{
		printf("student gets suplementary");
	}
	else 
	{
		printf("student is fail ");
	}
}
