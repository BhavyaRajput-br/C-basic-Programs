//wap to calculate that accepts four digits number from user and calculate the sum of first and last digit 
#include <stdio.h>
int main()
{
	int n,d1,d4,sum;
	printf("Enter  four digits:");
	scanf("%d",&n);
	d1= n/1000 ;
	d4= n%10 ;
	sum = d1+d4;
	printf("sum of first and last digit=%d",sum);
	
}

