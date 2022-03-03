//wap to display the 10 elements in reverse order
// entered by user (by using pointer:)

#include<iostream>
using namespace std;
int main()
{
	int arr[100],n;
	cout<<"Enter a total number="<<endl;
	cin>>n;
	
	cout<<" entered the elments "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>*(arr+i);
	}
	
	cout<<"displaying the elments in reverse order"<<endl;
	for(int i=n;i>=0;i--)
	{
	    cout<<"The elements in reverse order="<<*(arr+i)<<endl;	
	}
	return 0;	
}
