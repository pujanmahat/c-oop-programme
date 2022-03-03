// wap to display the sum of two dimension 
// using pointer in c++

#include<iostream>
using namespace std;
int main()
{
	int a[100][100],b[100][100],sum[100][100];
	int m,n;
	cout<<"Enter the row and column of matrix"<<endl;
	cin>>m>>n;
	cout<<"Enter the elements of matrix a"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>*(*(a+i)+j);
		}
	}
		cout<<"Enter the elements of matrix b"<<endl;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>*(*(b+i)+j);
			}
		}
		cout<<"The sum of two matrix "<<endl;
		for(int i=0;i<m;i++)
	    {
			for(int j=0;j<n;j++)
			{
				*(*(sum+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
			}
		}
		cout<<"Sum="<<endl;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<*(*(sum+i)+j)<<"\t";
			}
			cout<<endl;
		}
}
