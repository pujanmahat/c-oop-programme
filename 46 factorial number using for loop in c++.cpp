// wap to display factorial number using for loop in c++

#include<iostream>
using namespace std;
int main()
{
	int i,n,fact=1;
	cout<<"Enter any number "<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"The factorial of given number = "<<fact<<endl;
	return 0;
}
