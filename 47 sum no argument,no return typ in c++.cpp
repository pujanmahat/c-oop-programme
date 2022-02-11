//wap to find the sum of two numbers entered by user using the following function signature
// void sum() (without argument and without return type )

#include<iostream>
using namespace std;
void sum();                 //function declaration
int main()
{
   	sum();                  // function calling
}
void sum()                  //function defination 
{
	int a,b,s;
  cout<<"Enter two numbers "<<a<<b<<endl;
  cin>>a>>b;
  s=a+b;
  cout<<"The sum is "<<s<<endl;
  	
}
