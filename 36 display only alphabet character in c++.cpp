//wap to remove all the character except alphabet in  c++.

#include<iostream>
using namespace std;
int main()
{
	char str[100],temp[100];
	cout<<"enter a sentence "<<endl;
	cin.getline(str,100);
//	cout<<str;
	for(int i=0;str[i]!='\0';i++)
	{
		if( (str[i]>='a' && str[i]<= 'z')  || (str[i]>= 'A' && str[i]<= 'Z') )
	{
	  cout<<str[i];
	}
//	cout<<str<<endl;
}
return 0;
	
 } 
