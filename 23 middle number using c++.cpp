// wap to display the middle number among entered three number using c++

#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter three number "<<endl;
	cin>>a>>b>>c;
	if( (a>b && a<c)||(a<b && a>c))
	{
		cout<<"the middle number among three is "<<a<<endl;
	}
	else if ((b>a && b<c)|| (b<a && b>c))
	{
		cout<<"the middle number among three is "<<b<<endl;
	}
	else {
		cout<<"the middle number among three is "<<c<< endl;
	}
	return 0; 
}
