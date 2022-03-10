//wap to find the area and perimeter of rectangle(using c++)

#include <iostream>
using namespace std;
class rectangle
{
	private:
		float length;
		float breadth;
	public:
		void setdata()
		{
			cout<<"Enter length and breadth"<<endl;
			cin>>length>>breadth;
		}
		float getarea()
		{
			return(length*breadth);
		}
		float getperimeter()
		{
			return(2*(length + breadth));
	}
};
int main()
{
	rectangle r1;
	r1.setdata();
	r1.getarea();
	r1.getperimeter();
	cout<<"The area of rectangle ="<<r1.getarea()<<endl;
	cout<<"The perimeter of rectangle ="<<r1.getperimeter()<<endl;
}
