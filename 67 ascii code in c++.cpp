// wap to display the Ascii code  

#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a single character "<<endl;
	cin>>ch;
	cout<<static_cast<int>(ch)<<endl;
}
