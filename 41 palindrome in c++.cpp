// wap to check the entered number is palindrome or not in c++

#include<iostream>
using namespace std;
int main()
{
	int n,temp,r,sum=0;
	cout<<"enter any number "<<endl;
	cin>>n;
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum*10 +r;
		n=n/10;
	}
	if (temp==sum)
	{
		cout<<"The number is palindrome "<<endl;
	}
	else{
		cout<<"The number is not palindrom"<<endl;
	}
	return 0;
}
