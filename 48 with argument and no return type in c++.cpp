// sum of two numbers entered by user using function in c++
// void sum(int , int ) (with argument without return type)

#include<iostream>
using namespace std;
void sum(int ,int );                 //function declaration
int main()
{
	int a,b;
	cout<<"Enter two numbers "<<endl;
	cin>>a>>b;
   	sum(a,b);                  // function calling
}
void sum(int a,int b)                  //function defination 
{
  int s;
  s=a+b;
  cout<<"The sum is "<<s<<endl;
  	
}
