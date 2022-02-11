//wapt to input a string and check if it is palindrome or not 

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[100];
	char *rev;
	cout<<"Enter a string "<<endl;
	cin>>str;
	rev=strrev(str);
	if(strcmp(str,rev)==0)
	{
		cout<<"The input string is palindrome "<<endl;
	}
	else 
	{
		cout<<"The input string  is not palindrome "<<endl;
	}
	return 0;
	
}
