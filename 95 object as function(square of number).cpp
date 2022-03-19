//wap to display the square of given number 
//using object as a function argument in c++

#include <iostream>
using namespace std;
class square
{
	private:
		int n;
	public:
		void putdata()
		{
			cout<<"Enter any number "<<endl;
			cin>>n;
		}
		void res(square a)
		{
			n=a.n*a.n;
			cout<<"square of given number ="<<n<<endl;
		}
};
int main()
{
	square s1,s2;
	s1.putdata();
	s2.res(s1);
}
