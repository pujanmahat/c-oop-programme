//  using Default argument sum of two numbers 

#include<iostream>
using namespace std;
int sum(int a=6 ,int b=5);
int main()
{
	int a,b,s;
//	cout<<"enter any two numbers "<<endl;
//	cin>>a>>b;
	s=sum();
	cout<<"sum "<<s<<endl;
	
	
}
int sum(int a, int b)
{
	int add;
	add=a+b;
	return add;
	
}

