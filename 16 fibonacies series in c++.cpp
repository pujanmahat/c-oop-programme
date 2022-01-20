// wap to display 0 1 1 2 3 5 8 ........ (using fibonacci series in c++)

#include<iostream>
using namespace std;
int main()
{
	int n,a=0,b=1,i,c;
	cout<<"enter any number "<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	cout<<" "<<a;
	c=a+b;
	a=b;
	b=c;
	}
	
}
