//wap to demonstrate call by reference (swapping the two numbers)

#include <iostream>
using namespace std;
void swap(int &,int & );
int main()
{
	int a,b;
	cout<<"Enter any two number "<<endl;
	cin>>a>>b;
	cout<<"Before swapping "<<a<<b<<endl;
	swap(a,b);
	cout<<"After swapping "<<a<<b<<endl;
}
void swap(int &a, int &b )
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	
}
