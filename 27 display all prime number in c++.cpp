// wap to display all n prime number up to the entered number by user in c++


#include<iostream>
using namespace std;
int main()
{

	int n,r,i,j,c=0; 
	cout<<"enter any number "<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			r=i%j;
			if(r==0)
			{
				c=c+1;
			}
		}
			if (c==2)
			{
				cout<<" "<<i<<endl;
			}
			c=0;
		//return 0; 
	}
}
	
		
	
	
	
  
