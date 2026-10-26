// Write a program to check whether a number is divisible by both 5 and 11. 
#include<stdio.h>
int main()
{
    int n;

    printf("Enter a number ");
    scanf("%D", &n);

    if(n%5==0 && n%11==0)
    {
        printf("Number is divisible");
    }
    else 
    {
        printf("Number is not divisible");
    }
}
