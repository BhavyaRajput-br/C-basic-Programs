//wap in c to print the first n natural number usind do while loop
#include<stdio.h>
int main()
{
	int i = 1,n,sum=0;
	printf("entert the number");
	scanf("%d",&n);
	do{
		sum=sum+i;
		i++;
	}
	while(i<=n);
 printf("the sum is : %d\n",sum);
 
}



