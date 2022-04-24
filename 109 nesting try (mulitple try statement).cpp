// wap using multiple try statement (exception handling)

#include<iostream>
using namespace std;
int main()
{
	
	float nu,de,res[10],c;
	int ind;
	xy:
	cout<<"Enter numerator and denomenator"<<endl;
	cin>>nu>>de;
	try
	{
	if(de==0)
	{
		throw(de);
	}
	ab:
	cout<<"Enter index number="<<endl;
	cin>>ind;
	try
	{
	
	if(ind>=10)
	{
		throw (ind);
	}
	c=nu/de;
	res[ind]=c;
	cout<<"result="<<c<<"successfully stored="<<ind<<endl;
}
catch (int ind)
{
	cout<<"Index is greater than 10 so ind="<<ind<<endl;
	cout<<"Enter ranger between 1 to 10"<<endl;
	goto ab;
}
}

catch (float de)
{
	cout<<"denomenator contains zero de="<<de<<endl;
	cout<<"Enter value greater than zero"<<endl;
	goto xy;

}


}
