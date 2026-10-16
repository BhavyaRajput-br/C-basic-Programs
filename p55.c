//wap in C  using pointer 
#include<stdio.h>
int main()
{
	int a=10,*p,**q;
	printf("valUE of a = %d\n",a);
	printf("address of a=%u\n,&a");
	p=&a;
	printf("value of p = %d\n",p);
	printf("value of a using pointer p = %d\n", *p );
	printf("address of  p using pointer q=%d\n,*q");
	q=&p;
	printf("value of q=%u\n",q);
	printf("value of p using q = %u\n", *q);
	printf("value of q using p=%u\n",**q);
}
