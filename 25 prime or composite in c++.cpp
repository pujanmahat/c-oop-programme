// wap to display the entered number is prime or composite in c++ 

#include<iostream>
using namespace std;
int main()
{
	int n,i,c=0;
	cout<<"Enter any number "<<endl;
	cin>>n;
	for (i=1;i<=n;i++)
	{
		
		if(n%i==0)
		{
			c=c+1;
		}
	}
		if (c==2)
		{
			cout<<"the number is prime "<<endl;
		}
		else 
		{
			cout<<"the number is composite "<<endl;
		}
		
}
