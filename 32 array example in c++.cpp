// wap to display elements ans sum of the elements in array in c++.

#include<iostream>
using namespace std;
int main()
{
	int num[10] ,n,i,sum=0;
	cout<<"enter the total numbers"<<endl;
	cin>>n;
	// elements in array
	for(i=0;i<n;i++)
	{
		cin>>num[i];
	}
	for(i=0;i<n;i++)
	{
		sum=sum+num[i];
	}
	// displaying the elements 
	
	for(i=0;i<n;i++)
	{
		cout<<" entered elements are "<<num[i]<<endl;
	}
	cout<<"the sum is "<<sum<<endl;
	return 0;
	
}
