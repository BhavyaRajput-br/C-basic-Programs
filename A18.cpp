//wap in c++ to determine the triangle is valid 
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,sum;
	cout<<"enter the value of a,b,c ";
	cin>>a>>b>>c;
	sum=a+b+c;
	if(a>0 && b>0 && c>0 && sum==180)
	{
		cout<<"is valid triangle ";
	}
	else{
		cout<<"is not valid triangle";
	}
	
}
