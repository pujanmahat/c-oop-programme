// wap to display simple interest and amount (using oop in c++)

#include<iostream>
using namespace std;
class calculate
{
	private:
		float p,t,r;
		public:
			void putdata(float pri, float time, float rate)
			{
				p=pri;
				t=time;
				r=rate;
			}
			float getsi()
			{
				return (p*t*r/100);
			}
			float getamt()
			{
				float si;
				return (si+p);
			}
};
int main()
{
	float p,t,r,si,amt;
	cout<<"enter principle ,time and rate "<<endl;
	cin>>p>>t>>r;
	calculate c1;
	c1.putdata(p,t,r);
	si=c1.getsi();
	amt=c1.getamt();
	cout<<"the simple interest is "<<si<<endl;
	cout<<"the amount is "<<amt<<endl;
	return 0;
}

