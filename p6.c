// wap to calculate volume of SPHERE 

#include<stdio.h>
int main ()
{
	float r, volume;
	printf("enter the value of r:"); 
	scanf("%f",&r);
	volume = 1.33 * 3.14 * r * r * r;
	printf("volume of sphere = %f", volume );
}
