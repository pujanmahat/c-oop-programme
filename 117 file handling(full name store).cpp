//wap to input your full name and store in file abc.txt

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	char name[100];
	ofstream ofs;
	ofs.open("abc.txt");
	cout<<"Enter full name"<<endl;
	cin.getline(name,100);
	ofs.write(name,strlen(name));
	ofs.close();
}
