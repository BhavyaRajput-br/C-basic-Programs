#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			printf("%d",j);
			j++;
			
		}
		printf("\n");
		i++;
	}
}
