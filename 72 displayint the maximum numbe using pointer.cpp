// wap to display the elements of array using pointer and display the maximum number among all in c++


#include<iostream>
using namespace std;
int main()
{
	int arr[100],n;
	cout<<"Enter the total number "<<endl;
	cin>>n;
	cout<<"Enter the Elements of array using pointer ="<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>*(arr+i);
	}
	
	//displaying the elements of array using pointer 
	
	for(int i=0;i<n;i++)
	{
		cout<<"The elements of array using pointer ="<<*(arr+i)<<endl;
	}
	
	// displaying the maximum number among all
	int max=*(arr+0);
	for(int i=0;i<n;i++)
	{
   if(*(arr+i)>max)
   {
   	max=*(arr+i);
   }
}
   cout<<"The maximum number among ="<<max<<endl;
     // displaying the address of maximum number 
   cout<<"Address of maximum number ="<<&max;
  
}
