//wap to check a given  triangle is isosceles,equilateral,scalence.
#include<stdio.h>
int main()
{ 
  int a,b,c;
  printf("enter the sides");
  scanf("%d%d%d",&a,&b,&c);
  if(a==b && b==c)
  { 
  printf("this is equilateral triangle:");

  }
  else if(a==b || b==c|| a==c)
  {
  
  printf("this is isosceles triangle");
  
}
  else
  {
  	printf("this is scalene triangle");
  }
}

