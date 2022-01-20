// wap to display numbers (using single inheritance in opp using c++)

#include <iostream>
using namespace std;
class base
{
	private:
		int a,b;
		public:
			void putdata()
			{
				cout<<"enter two numbers "<<endl;
				cin>>a>>b;
			}
			void getdata()
			{
				cout<<"the numbers are "<<a<<endl<<b<<endl;
			}
};
class derive:public base
{
	private:
		int m,n;
		public:
			void input()
			{
				cout<<"enter two numbers "<<endl;
				cin>>m>>n;
			}
			void show()
			{
				cout<<"the numbers are "<<m<<endl<<n;
			}
};
int main()
{
	base ob;
	derive ob1;
	ob.putdata();
	ob.getdata();
	
	ob1.input();
	ob1.show();
	return 0;
}

