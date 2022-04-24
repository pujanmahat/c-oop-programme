//wap to display area of rectangle using friend function

#include<iostream>
using namespace std;
class rectangle
{
	private:
		int length,breadth;
	public:
		void setdata(int l,int b)
		{
			length=l;
			breadth=b;
		}
		
		friend int  area(rectangle r);
};
int area(rectangle r)
{
	return (r.length*r.breadth);
}
int main()
{
	rectangle r;
	r.setdata(4,5);
    int res=area(r);
    cout<<"Result ="<<res<<endl;
}
