//wap to find the maximum number creating object inside the class 
//without creating object of class type

#include <iostream>
using namespace std;
class demo
{
	private:
		int a;
	public:
		demo()
		{
			a=0;
		}
		demo(int n)
		{
			a=n;
		}
		demo max(demo d2)
		{
			if(d2.a>a)
			{
				return d2;
			}
			else 
			{
				return *this;
			}
		}
		void show()
		{
			cout<<a;
		}
};
int main()
{
	int b,c;
	cout<<"Enter any two number "<<endl;
	cin>>b>>c;
	demo d1(b),d2(c),d;
	d=d1.max(d2);
	cout<<"max=";
	d.show();
}
