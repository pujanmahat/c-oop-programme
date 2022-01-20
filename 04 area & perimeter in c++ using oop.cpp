// wap to display area and perimeter of rectangle using oop in c++

#include<iostream>
using namespace std;
class rectangle
{
	private:
	int len,brea;
	public:
	void putdata(int l, int b)
	{
		
	  len=l;
	  brea=b;
	  
	}
		int getarea()
		{
			return (len+brea);
		}
		int getperimeter()
	    {
	    	return (2*(len+brea));
		}
};
int main()
{
	int len,brea;
	int area,perimeter;
	cout<<"enter length and breadth"<<endl;
	cin>>len>>brea;
	rectangle r1;
	r1.putdata(len,brea);
	area=r1.getarea();
	cout<<"the area is "<<area<<endl;
	perimeter=r1.getperimeter();
	cout<<"the perimeter is "<<perimeter<<endl;
	return 0; 
}


