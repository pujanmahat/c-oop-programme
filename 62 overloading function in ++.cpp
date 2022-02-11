// wap to display area of rectangle and area of circle using funtion overloading in c++

#include<iostream>
using namespace std;
class operation
{
	public:
		float area(int l,int b)
		{
			return(l*b);
		}
		float area(int r)
		{
			return(3.14*r*r);
		}
};
int main()
{
	operation o;
	float ar;
    ar=o.area(3,2);
	cout<<"Area ="<<ar<<endl;
    ar=o.area(1);
    cout<<"Area ="<<ar<<endl;
}
