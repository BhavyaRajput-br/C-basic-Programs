//wap in C  using pointer 
#include<stdio.h>
int main()
{
	int a,b,*p,*q,sum;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
   sum=*p+*q;
   printf("sum=%d\n",sum);
}
