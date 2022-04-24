//Wap to add 3*3 matrix using concept of generic class

#include<iostream>
using namespace std;
template <class t>
void add(t x[10][10], t y[10][10], t row, t col )
{
     t sum[10][10];
     for(int i=0;i<row;i++)
     {
     	for(int j=0;j<col;j++)
     	{
     		sum[i][j]=x[i][j]+y[i][j];
		 }
	 }
	 
	 for(int i=0;i<row;i++)
	 {
	 	for(int j=0;j<col;j++)
	 	{
	 		cout<<sum[i][j]<<" ";
		 }
		  cout<<endl;
	 } 	
	
}

int main()
{
	int a[10][10],b[10][10],row,col;
	cout<<"Enter row and column of matrix "<<endl;
	cin>>row>>col;
	cout<<"Enter the element of first matrix"<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"enter the elments of second matrix"<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>b[i][j];
		}
	}
	add(a,b,row,col);
}


