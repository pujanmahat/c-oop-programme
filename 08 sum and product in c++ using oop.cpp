// wap to display sum and product of two numbers (using oop in c++)


#include<iostream>
using namespace std;
class operation
{
	private :
	int a,b;
	public:
	void putdata(int a, int b)
{
		
		cout<<"enter length and breadth"<<endl;
		cin>>a>>b;
	    
		}	
		void getsum()
		{
			cout<<"the sum is "<<a+b<<endl;
		}
		void getprod()
		{
			cout<<"the prod is "<<a*b<<endl;
		}
		
};
int main()
{
	int a,b;
	operation r1;
	r1.putdata(a,b);
	r1.getsum();
	r1.getprod();
	return 0;
}
