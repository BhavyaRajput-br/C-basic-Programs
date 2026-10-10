//wap in c using  function with  arg and no return value
#include<stdio.h>
void add(int,int);
void add(int a,int b)
{
	printf("Add=%d\n",a+b);
}

	void main()
	{
	int a,b;
	printf("enter the value of a and b ");
	scanf("%d",&a,&b);
	add(a,b);
	}  	
