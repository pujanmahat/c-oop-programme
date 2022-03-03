// wap to display the average marks of 10 students in a subject
// using pointer in c++

#include<iostream>
using namespace std;
int main()
{
	int n,marks[10]; 
	int sum=0,average;
	cout<<"Enter marks of 10 students"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>*(marks+i);
		sum=sum+*(marks+i);
	}
	
	average=(sum/10);
	cout<<"Average ="<<average<<endl;
	return 0;
}
