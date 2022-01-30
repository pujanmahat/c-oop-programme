// wap to display the hcf and lcm of two entered numbers by user in c++

#include<iostream>
using namespace std;
int main()
{
	int hcf,lcm,n1,n2,i,min;
	cout<<"enter two numbers "<<endl;
	cin>>n1>>n2;
	min=(n1<n2)?n1:n2;
	for(i=1;i<=min;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			hcf=i;
		}
	}
	lcm=n1*n2/hcf;
	cout<<"hcf ="<<hcf<<endl;
	cout<<"lcm = "<<lcm<<endl;
	return 0;
}
