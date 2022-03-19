//wap to square the given number using  
//object as a function argument

#include<iostream>
using namespace std;
class square
{
	private:
		int n;
		public:
			void setdata()
			{
			   cout<<"Enter any number "<<endl;
			   cin>>n;	
			}
			void getsquare(square p)
			{
				int  x=p.n*p.n;
//				cout<<"square of number ="<<x<<endl;
			}
			void display()
			{
				int x;
				cout<<"square of number ="<<x;
			}
 } ;
 int main()
 {
 	square s1,s2;
 	s1.setdata();
 	s2.getsquare(s1);
 	s2.display();
 }
