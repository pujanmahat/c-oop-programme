//Invoking function that generates exception

#include<iostream>
using namespace std;
int divide(int,int);
int main()
{
	int nu,de,res;
	ab:
	cout<<"Enter numerator and denomenator"<<endl;
	cin>>nu>>de;
	try
	{
		res=divide(nu,de);
		cout<<"Result ="<<res<<endl;
	}
	catch(int sn)
	{
		cout<<"exception occured sn="<<sn<<endl;
		cout<<"Enter value greater than zero"<<endl;
		goto ab;
	}
}
int divide(int fn,int sn)
{
	if(sn==0)
	{
		throw(sn);
	}
	else 
	{
		return(fn/sn);
	}
}
