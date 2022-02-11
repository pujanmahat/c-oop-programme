//wap to display area of rectangle using function
//(without argument and with return type) in c++

#include<iostream>
using namespace std;
int  area();
int main()
{
	int x;
	x=area();
	cout<<"Area = "<<x<<endl;
}

int  area()
{
	int l,b,a;
	cout<<"Enter length and breadth "<<endl;
	cin>>l>>b;
	a=l*b;
	return a;
}
