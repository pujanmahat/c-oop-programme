//wap to remove all the character except vowels in  c++.

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
	if( str[i]== 'a' || str[i]== 'e' || str[i]=='i'|| str[i]== 'o' || str[i]== 'u'|| str[i]== 'A'|| str[i]== 'E' || str[i]== 'I'|| str[i]== 'O' || str[i]== 'U')
	{
	  cout<<str[i];
	}
//	cout<<str<<endl;
}
return 0;
	
 } 
