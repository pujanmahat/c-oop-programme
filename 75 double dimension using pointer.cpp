//wap to display the elements of double dimension array 
// using pointer in c++

#include<iostream>
using namespace std;
int main()
{
	int a[10][10],m,n;
	cout<<"Enter the row and column of matrix"<<endl;
	cin>>m>>n;
	cout<<"Enter the elements of matrix"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>*(*(a+i)+j);
		}
	}
	cout<<"Displaying the elements of matrix"<<endl;
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<*(*(a+i)+j)<<"\t";
		}
		cout<<endl;
	}
	
}
