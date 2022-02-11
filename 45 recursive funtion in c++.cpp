// wap to display recursive function or factorial number (the number entered by user ) in c++

#include<iostream>
using namespace std;
int fact(int);
int main()
{
	int n ,x;
	cout<<"Enter any number "<<endl;
	cin>>n;
	x=fact(n);
	cout<<"Factorial of give number = "<<x<<endl;
	
	
}
int fact(int n)
{
	if (n<=1)
	{
		return 1;
	}
	else 
	{
		return (n*fact(n-1));
	}
}
