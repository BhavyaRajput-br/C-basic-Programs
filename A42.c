//write a program for fibonacci series 
//0 1 1 2 3 5 8 13 21.....
#include<stdio.h>
void main()
{
   int n,i=1,a=-1,b=1,c;
	printf("enter the number:");
	scanf("%d",&n);
	do
	{
		c=a+b;
	   printf("%d\t",c);
		a=b;
		b=c;
		i++;
		
	}
	while(i<=n);
}
