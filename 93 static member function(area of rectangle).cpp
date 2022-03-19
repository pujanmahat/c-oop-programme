// wap to display the area of rectangle 
// using static member function

#include <iostream>
using namespace std;
class area
{
	private:
	    static int l,b;
	public:
	static	void putdata()
		{
			cout<<"Enter the length and breadth "<<endl;
			cin>>l>>b;
		}
	static  void display()
		{
			int area=l*b;
			cout<<"Area of rectangle ="<<area<<endl;
		}
};
int area::l;
int area::b;
int main()
{
//   area::putdata();
//   area::display(); 

area x,y;
//x.putdata();
//x.display();
//y.putdata();
//y.display(); 

x.putdata();
y.putdata();
x.display();
y.display();	
}
