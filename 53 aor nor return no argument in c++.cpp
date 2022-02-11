//wap to display area of rectangle using function
//(without argument and without return type) in c++

#include<iostream>
using namespace std;
void area();
int main()
{
	area();
}

void area()
{
	int l,b,a;
	cout<<"Enter length and breadth "<<endl;
	cin>>l>>b;
	a=l*b;
	cout<<"Area ="<<a<<endl;
}
