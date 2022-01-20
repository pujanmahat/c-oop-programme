// wap to disply roots of quadriatic equation using c++

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c,x1,x2,d;
	cout<<"enter three number "<<endl;
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	x1=(-b+sqrt(d))/2*a;
	x2=(-b+sqrt(d))/2*a;
	if (d==0)
	{
		cout<<"the roots are real and equal "<<endl;
	}
	else if (d>0)
	{
		cout<<"the roots are real and distinct "<<endl;
	}
	else 
	{
		cout<<"the roots are real and imaginary"<<endl;
	}
	cout<<"the value of x1 is "<<x1<<endl;
	cout<<"the valude of x2 is "<<x2<<endl;
	return 0; 
}
