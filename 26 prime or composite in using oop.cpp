// wap to display prime or composite using opp in c++

#include<iostream>
using namespace std;
class operation
{
	private:
		int n,i,c=0;
		public:
		
			void putdata()
			{
				cout<<"enter any number "<<endl;
				cin>>n;
			}
			void find()
			{
			
			for(i=1;i<=n;i++)
			{
				if (n%i==0)
				{
					c=c+1;
				}
			}
				if (c==2)
				{
					cout<<"the number is prime "<<endl;
				}
				else 
				{
					cout<<"the number is composite "<<endl;
				}
			}
		};
			int main()
			{
				operation o1;
				o1.putdata();
				o1.find();
			}
			

