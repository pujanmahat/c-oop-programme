// wap to input a number . display the number is palindrome or not using c++

#include <iostream>
using namespace std;
int main()
{
	int n,r,sum=0,temp;
	cout<<"enter any number "<<endl;
	cin>>n;
	temp=n;
	while (n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if (temp==sum)
	{
		cout<<"the number is palindrome "<<endl;
	}
	else 
	{
		cout<<"the number is not palindrome "<<endl;
	}
	return 0; 
}
