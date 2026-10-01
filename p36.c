//wap for decimal to binary conversion
#include<stdio.h>
void main()
{
	int n,i=1,rem,bin=0;
	printf("enter the number");
	scanf("%d",&n);
	do
	{
		rem=n%2;
		bin=bin+rem*i;
		n=n/2;
		i=i*10;
		}while(n>0);
		printf("binary no=%d\n",bin);
	}
