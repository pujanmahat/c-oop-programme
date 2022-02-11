//wap to display area of rectangle using function
//(with argument and with return type) in c++

#include<iostream>
using namespace std;
int  area(int ,int );
int main()
{
	int l,b,x;
	cout<<"Enter length and breadth "<<endl;
	cin>>l>>b;
	x=area(l,b);
	cout<<"Area ="<<x<<endl;
}

int  area(int l,int b)
{
    int a;
	a=l*b;
	return a;
}
