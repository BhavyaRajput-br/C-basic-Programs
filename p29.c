//wap to check whether number is palendrome or not 
#include<stdio.h>
int main()
{
	int num,original,d1,d2,d3,reverse=0;
	printf("enter the num ");
	scanf("%d",&num);
	original=num;
	d1=num/100;
	d2= (num%100)/10;
	d3=num%10;
	reverse=(d3*100+d2*10+d1);
	if(reverse==original)
	{
		printf("this is palendrome");
		
	}
	else
	{
		printf("this is not palendrome");
	}
}
