//wap in c using  function with  arg and with return value
#include<stdio.h>
int add(int,int);
int add(int a,int b)
{
	return a+b;
}

	int main()
	{
	int a,b,res;
	printf("enter the value of a and b ");
	scanf("%d",&a,&b);
		res=add(a,b);
	    printf("Add = %d", res);
}  	

