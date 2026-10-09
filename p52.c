//wap in c using  function no arg and with return value
#include<stdio.h>
int add();
int add()
{
	int a,b;
	printf("enter the value of a and b ");
	scanf("%d %d",&a,&b);
	return a+b;
	}
	int  main()
	{
		int res;
		res = add();
	    printf("Add = %d", res);
 
	}
