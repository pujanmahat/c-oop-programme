//wap to display two string (using concatenation(cat)) in c++


#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[100],str2[100];
	cout<<"Enter a string "<<endl;
	cin.getline(str1,100);
	cout<<"Enter a string "<<endl;
	cin.getline(str2,100);
	strcat(str1,str2);
	cout<<"concatenation string="<<str1<<endl;
	
}
