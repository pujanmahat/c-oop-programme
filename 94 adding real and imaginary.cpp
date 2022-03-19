//wap to add real and comple number 
//using object as a functon argument

#include <iostream>
using namespace std;
class number 
{
	private:
		int real;
		int imag;
	public:
		void putdata()
		{
			cout<<"Enter real number "<<endl;
			cin>>real;
			cout<<"Enter imaginary number "<<endl;
			cin>>imag;
		}
		void add(number a, number b)
		{
			real=a.real+b.real;
			imag=a.imag+b.imag;
		}
		void display()
		{
			cout<<real<<"\t";
			cout<<imag<<endl;
		}
};
int main()
{
	number n1,n2,n3;
	n1.putdata();
	n2.putdata();
	n3.add(n1,n2);
	n1.display();
	n2.display();
	n3.display();
}
