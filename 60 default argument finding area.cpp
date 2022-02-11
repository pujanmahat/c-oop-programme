//Default argument

#include<iostream>
using namespace std;
int area(int l, int b=7)
{
	int area;
	area=l*b;
	return area	;
	
}
int main()
{
	int x;
	x=area(5,4);
	cout<<"Area="<<x<<endl;
	x=area(9);
	cout<<"Area="<<x<<endl<<endl;
	cout<<"The program is absolutely correct";
}

