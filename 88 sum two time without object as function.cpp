//wap to find the hr and minute from given two time

#include <iostream>
using namespace std;
class time
{
	private:
		int hr,hr2,hr1;
		int min,min2,min1;
		public:
			void putdata()
			{
				cout<<"Enter an hour"<<endl;
				cin>>hr1;
				cout<<"Enter an minute"<<endl;
				cin>>min1;
				cout<<"Enter an hour"<<endl;
				cin>>hr2;
				cout<<"Enter an minute"<<endl;
				cin>>min2;
			}
			void display()
			{
			int min=min1+min2;
			int hr=min/60;
			hr=hr+hr1+hr2;
			min=min%60;
			cout<<hr<<"hr"<<min<<"min"<<endl;
			}
};
int main()
{
	time t1;
	t1.putdata();
	t1.display();
	
}
