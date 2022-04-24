//wap that handle the zero exception

#include<iostream>
using namespace std;
int main()
{
	try
	{
	
	int nu,de;
	abc:
	cout<<"Enter numerator and denominator"<<endl;
	cin>>nu>>de;	
	if(de==0)
	{
		throw(de);
	}
	else 
	{
		int res;
		res=nu/de;
		cout<<"Result ="<<res<<endl;
	}
}
	catch (int de)
	{
		cout<<"zero exception occured de="<<de<<endl;
		cout<<"Enter any value except zero"<<endl;
		goto abc;
	}
}
