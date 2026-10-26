// Write a program to check whether a triangle is equilateral, isosceles, or scalene
#include<iostream >
using namespace std;
int main()
{
   int a,b,c;
   cout<<"enter the value of a,b,c";
   cin>>a>>b>>c;
    if(a==b && b==c)
	{
	 cout<<"equilateral triangle";
	}  
	else if(a==b ||b==c|| a==c)
	{
		cout<< "isoceles triangle";
    }
    else{
    	cout<<"scalene triangle";
    	
	}
}
