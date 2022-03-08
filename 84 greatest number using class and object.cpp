//wap to find the greatest number among three number 
//using class and object in c++

#include <iostream>
using namespace std;
class greatest
{
	private:
		int a;
		int b;
		int c;
    public:
    	void setdata(int x,int y,int z)
    	{
    		a=x;
    		b=y;
    		c=z;
		}
		void greatestnumber()
		{
			if(a>b &&a>c)
			{
				cout<<"The greatest number ="<<a<<endl;
			}
			else if(b>a &&b>c)
			{
				cout<<"The greatest number ="<<b<<endl;
			}
			else 
			{
				cout<<"The greatest number ="<<c<<endl;
			}
		}
};
int main()
{
	int a,b,c;
	cout<<"Enter the three number "<<endl;
	cin>>a>>b>>c;
	greatest g;
	g.setdata(a,b,c);
	g.greatestnumber();
}
