#include<iostream>
using namespace std;
int sum(int ,int );                 //function declaration
int main()
{ 
    int a,b;
    cout<<"Enter two numbers "<<endl;
    cin>>a>>b;
   	int x=sum(a,b);                                // function calling
	cout<<"The sum =" <<x;                   
}
int sum( int a,int b)                  //function defination 
{
	int s;
  s=a+b;
 return s;
  	
}
