//WAP TO Calculate gross salary and net salary 
#include<stdio.h>
int main()
{
	int ns ,gs , da ,bs ,pf ;
	printf("enter the bs:");
	scanf("%d",&bs);
	da =  bs*10/100;
	gs = bs + da;
	pf = bs*5/100;
	ns = gs - pf;
	printf("net salary = %d\n", ns);
    printf("gross salary = %d\n", gs);
}
