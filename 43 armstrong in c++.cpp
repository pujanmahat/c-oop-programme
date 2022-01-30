// wap to display the number is armstrong or not in c++ using while loop

#include<iostream>
using namespace std;
int main()
{
	int n,r,temp,arm=0;
	cout<<"Enter any number "<<endl;
	cin>>n;
	temp=n;
	while(n>0)
	{
		r=n%10;
		arm=r*r*r+arm;
		n=n/10;
	}
	if (temp==arm)
	{
		cout<<"The number is armstrong "<<endl;
	}
	else
	{
		cout<<"The number is not armstrong "<<endl;
	}
	return 0;
}
