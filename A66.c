//wap in c program  to addition with args and no return value
#include<stdio.h>
void add(int*,int*);
void add(int*a, int*b)
{
	int sum;
	sum=*a+*b;
	printf("sum=%d",sum);
	
}
void main()
{
	int a , b;
	printf("enter the value of a and b");
	scanf("%d%d", &a,&b);
	add(&a,&b);
	}
