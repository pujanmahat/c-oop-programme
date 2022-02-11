//wap to display area of rectangle using function
//(with argument and without return type) in c++

#include<iostream>
using namespace std;
void area(int ,int );
int main()
{
	int l,b;
	cout<<"Enter length and breadth "<<endl;
	cin>>l>>b;
	area(l,b);
}

void area(int l,int b)
{
    int a;
	a=l*b;
	cout<<"Area ="<<a<<endl;

}
