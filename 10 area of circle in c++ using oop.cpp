// wap to display area of circle using ( oop in c++)

#include<iostream>
using namespace std;
class circ
{
	private:
		float r;
		public:
			void putdata(float radius)
			{
				r=radius;
			}
			float getarea()
			{
				return (3.14*r*r);
			}
};
int main()
{
	float r,area;
	cout<<"enter any number "<<endl;
	cin>>r;
	circ c1;
	c1.putdata(r);
	area=c1.getarea();
	cout<<"the area of circle is "<<area<<endl;
	return 0;
	
}

