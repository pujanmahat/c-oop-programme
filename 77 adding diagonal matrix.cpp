//wap to display 3*3  matrix and sum of diagonal matrix of it 

#include <iostream>
using namespace std;
int main()
{
	int arr[3][3],i,j,sum=0;
	cout<<"Enter the elements of matrix "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		 cin>>arr[i][j];	
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
			  sum=sum+arr[i][j];	
			}	
		}
		cout<<"\t"<<endl;
	}
	cout<<"sum of diagonal matrix are "<<sum<<endl;
}
