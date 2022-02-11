//wap to display the fibonaccies series (0 1 1 2 3 5 8 .....................n)

#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,c,i,n;
	cout<<"Enter any number "<<endl;
	cin>>n;
	cout<<a<<"\t"<<b<<"\t";
	for(i=1;i<=n;i++)
	{
		c=a+b;
		cout<<c<<"\t";
		a=b;
		b=c;
	}
	
}
