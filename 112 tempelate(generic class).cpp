//wap to demonstrate the concept of tempelate(generaic class)

#include <iostream>
using namespace std;
template<class T>
class demo
{
	private:
		T x;
	public:
		demo()
		{
			x=0;
		}
		demo(T p)
		{
			x=p;
		}
		void show()
		{
			cout<<x<<endl;
		}
};
int main()
{
	demo <char*> d1("pujan");
	cout<<"string type"<<endl;
	d1.show();
	demo <char> d2('p');
	cout<<"char type"<<endl;
	d2.show();
	demo <int> d3(5);
	cout<<"int type"<<endl;
	d3.show();
	demo <float> d4(6);
	cout<<"float type"<<endl;
	d4.show();
	
}
