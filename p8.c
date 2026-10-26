//wap to convert the distance from km  to mm 
#include <stdio.h>
int main()
{
	float km,mm;
	printf("enter the distance of km :");
	scanf("%f", &km);
    mm = 1000000*km;
	printf("convert dist from  km to mm=%f" , mm);
}


