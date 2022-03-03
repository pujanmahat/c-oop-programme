//wap to display area of circle using class and object 

#include <iostream>
using namespace std;
class circle
{
	public:
		float const pi=3.14;
		double radius;
		
		double findarea()
		{
			return (pi* radius*radius);
		}
};
int main()
{
  circle c1,c2,c3;
  c1.radius=4.0;
  c2.radius=5.0;
  c3.radius=6.0;
  double result1=c1.findarea();
  double result2=c2.findarea();
  double result3=c3.findarea();
  cout<<"Area of circle "<<result1<<endl;
  cout<<"Area of circle "<<result2<<endl;
  cout<<"Area of circle "<<result3<<endl;
}
