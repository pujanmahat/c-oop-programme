// wap to display area of rectangle and area of triangle (using namespace in c++)

 
#include <iostream>
using namespace std;
 namespace rectangle
{
	float area(float l,float b)
	{
	//	float l,b;
		return (l*b);
	}
	
	}
	namespace triangle
	{
		float area(float b,float h)
		{
		  // float h,b;
			return ((1.0/2.0)*b*h);
		}
	}
//	using namespace rectangle ; 
	int main()
	{
	
		float l,b,h;
		cout<<"enter length ,breadth and height "<<endl;
		cin>>l>>b>>h;
	    cout<<"area of rectangle is "<<rectangle::area(l,b)<<endl;
	    cout<<"area of triangle is "<<triangle::area(b,h)<<endl;
	}
	
