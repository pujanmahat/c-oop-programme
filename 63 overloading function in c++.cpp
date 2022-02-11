// wap to display area of rectangle and area of rectangle using funtion overloading in c++

#include<iostream>
using namespace std;
class operation
{
	public:
		float area(int l,int b)
		{
			return(l*b);
		}
		float area(float l,float b)
		{
			return(l*b);
		}
};
int main()
{
	operation o;
	float ar;
    ar=o.area(3,2);
	cout<<"Area ="<<ar<<endl;
    ar=o.area(3.1f,2.0f);
    cout<<"Area ="<<ar<<endl;
}
