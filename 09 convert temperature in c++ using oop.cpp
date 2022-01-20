// wap to i/p tempereature in celsius and convert it into fahreheit (using oop in c++)

#include <iostream>
using namespace std;
class convert
{
	private:
		float cel;
		public:
			void putdata(float c)
			{
				cel=c;
			}
	
	float getfahrenheit()
	{
		return (9*cel/5+32);
	}
};
int main()
{
	float fahrenheit;
	float cel;
	cout<<"enter the value in celsius"<<endl;
	cin>>cel;
	convert c1;
	c1.putdata(cel);
    fahrenheit=c1.getfahrenheit();
	cout<<"the value in fahrenheit is "<<fahrenheit<<endl;
	return 0;
}
