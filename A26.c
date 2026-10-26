//wap to check whether thenumber is positive, negative or zero:
#include<stdio.h>
int main()
{
	int number;
	printf("enter the number:");
	scanf("%d",&number);
	if(number>0)
	{
		printf("number is positive");
	}
	else if (number<0)
	{
	    printf("number is negative");
    }   
    else
    {
	   printf("enter the number is zero");
    } 
	   
	
     return 0;
}
