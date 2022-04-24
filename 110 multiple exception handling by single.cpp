// wap using Only one catch(mulitple exception can be used by single piec of coding)

#include<iostream>
using namespace std;
int main()
{
	try
	{
	float nu,de,res[10],c;
	int ind;
	cout<<"Enter numerator and denomenator"<<endl;
	cin>>nu>>de;
	if(de==0)
	{
		throw(de);
	}
	cout<<"Enter index number="<<endl;
	cin>>ind;
	if(ind>=10)
	{
		throw (ind);
	}
	c=nu/de;
	res[ind]=c;
	cout<<"result="<<c<<"successfully stored="<<ind<<endl;
}
catch (...)
{
  cout<<"Exception occured"<<endl;	
}

}
