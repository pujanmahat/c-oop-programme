//wap to find the sum of two complex number using concept of generic class

#include <iostream>
using namespace std;
template <class T>
class complex
{
	private:
		T real;
		T img;
	public:
		complex()
		{
			real=0;
			img=0;
		}
		complex(T r, T i)
		{
			real=r;
			img=i;
		}
		complex sum(complex c)
		{
			complex temp;
			temp.real=real+c.real;
			temp.img=img+c.img;
			return temp;
		}
		void show()
		{
			cout<<"Real="<<real<<endl;
			cout<<"Imaginary="<<img<<endl;
		}
		
};
int main()
{
	cout<<"Integer type"<<endl;
	complex<int>c1(4,5);
	complex<int>c2(5,4);
	complex<int>c3;
	c3=c1.sum(c2);
	c3.show();
	
	cout<<""<<""<<endl;
	cout<<"float type"<<endl;
	
	complex<float>c4(4.5,5.3);
	complex<float>c5(5.6,4.4);
	complex<float>c6;
	c6=c4.sum(c5);
	c6.show();
}


