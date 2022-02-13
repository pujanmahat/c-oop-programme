// wap to dispaly the elements entered by user by array and pointer both in c++

#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	cout<<"Entered the elements of array using array ="<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];  
	}
	//displaying the elements or array using array
	
	for(int i=0;i<5;i++)
	{
		cout<<"The elements array using array="<<arr[i]<<endl;
	}
	
	cout<<endl;
	
	
	//The elemetns of array using pointer
	cout<<"Entered the elements of array using pointer ="<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>*(arr+i);
	}
	
	for(int i=0;i<5;i++)
	{
		cout<<"The elements of array using pointer ="<<*(arr+i)<<endl;
	}
	return 0;
}
