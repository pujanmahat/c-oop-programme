// wap to display the inline function in c++(maximum number among two numbers)

#include<iostream>
using namespace std;
inline int func(int a, int b)
{
	return(a>b)?a:b;
}
int main()
{
	int s;
	s=func(30,40);
	cout<<"Maximum "<<s<<endl;
}
