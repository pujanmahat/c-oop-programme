//wap to display string using (strupr library function ) in c++

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[100];
	cout<<"Enter any word "<<endl;
	cin>>str;
//	x=strupr(str);
	cout<<strupr(str)<<endl;
}
