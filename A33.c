//Write a program to check whether a character is a vowel or consonant. 
#include<stdio.h>
int main()
{
	char alphabet;
	printf("ente the alphabet");
	scanf("%C",&alphabet);
	if(alphabet =='a' && alphabet=='e' && alphabet =='i' &&alphabet =='o' &&alphabet=='u')
	{
		printf("this is vowel ");
	}
	else
	{
	    printf("this is consonant");	
	}
}
