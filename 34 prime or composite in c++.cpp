// wap to display prime or composite numbers entered by user

#include<iostream>
using namespace std;
int main()
{
	int n,i,r,c=0;
	cout<<"enter any number "<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		r=n%i;
		if(r==0)
		{
			c=c+1;
		}
	}
		if(c==1){
			cout<<"the number is neither prime or composite "<<endl;
		}
		else if(c==2)
		{
			cout<<"the numbers is prime "<<endl;
		}
		else{
			cout<<"the numbers in composite "<<endl;
		}
	
}
