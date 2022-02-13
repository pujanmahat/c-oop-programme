// wap to dispaly the elements using array and pointer both in c++

#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5};
	//displaying the elements of array  using array 
	
	for(int i=0;i<5;i++)
	{
		cout<<"The elemetns of array using array are ="<<arr[i]<<endl;   
	}
	
	cout<<endl;
	
	//displaying the elements of array using pointer
	
	for(int i=0;i<5;i++)
	{
		cout<<"The elements of array using pointer ="<<*(arr+i)<<endl;
	}
	return 0;
}
