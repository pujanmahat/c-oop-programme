// c++ program to demonstrate the concept of pointer 

#include<iostream>
using namespace std;
int main()
{
	int *pc,c;
	c=5;
	cout<<"Address of c="<<&c<<endl;
	cout<<"The value of c="<<c<<endl;
	
	pc=&c;
	cout<<"Address of pc ="<<pc<<endl;
	cout<<"The conterent of pc="<<*pc<<endl;
	
	c=11;
	cout<<"Address of pc holds ="<<pc<<endl;
	cout<<"The value pc holds="<<*pc<<endl;
	
	*pc=2;
	cout<<"Address of c holds ="<<&c<<endl;
	cout<<"The value of c ="<<c<<endl;
	
	return 0;
}
