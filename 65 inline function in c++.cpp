// wap to display the cube of given integer using inline funcion in c++

#include<iostream>
using namespace std;
inline int cube(int);
int main()
{
	int x,y;
	cout<<"Enter any number "<<endl;
	cin>>x;
	y=cube(x);
	cout<<"Cube ="<<y<<endl;
 } 
  inline int cube(int x)
 {
 	int l;
 	l=x*x*x;
 	return l;
 }
