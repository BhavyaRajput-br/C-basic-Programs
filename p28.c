#include<stdio.h>
int main()
{
	int num,originalnum,d1,d2,d3,sum;
	printf("enter the num");
	scanf("%d",&num);
	originalnum = num;
	d1=num/100;
	d2= (num%100)/10;
	d3=num%10;
	sum= (d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);
	if(sum  == originalnum){
		printf("num is armstrong");
	}
	else
	{
		printf("num is not armstrong");
	}
}
