// wap to display sum ot two numbers in function  (without argument and with return type in c++) 

#include<iostream>
using namespace std;
int sum();                 //function declaration
int main()
{
	int x;
    x=sum();                                // function calling
	cout<<"The sum = "<<x;                   
}
int sum()                  //function defination 
{
	int a,b,s;
  cout<<"Enter two numbers"<<endl;
  cin>>a>>b;
  s=a+b;
 return s;
  	
}
