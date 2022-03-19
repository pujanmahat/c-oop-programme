//wap to display hr and min from given two time 
//entered by user (using object as function in argument)

#include <iostream>
using namespace std;
class time
{
	private:
		int hr;
		int min;
		public:
			void putdata()
			{
				cout<<"Enter hr"<<endl;
				cin>>hr;
				cout<<"Enter min"<<endl;
				cin>>min;
				
			}
			void display()
			{
				cout<<"hr="<<hr<<"hr"<<endl;
				cout<<"min="<<min<<"min"<<endl;
			}
			void sum(time a,time b)
			{
				min=a.min+b.min;
				hr=min/60;
				min=min%60;
				hr=hr+a.hr+b.hr;
			}
 };
 int main()
 {
 	time t1,t2,t3;
    t1.putdata();
    t2.putdata();
    t3.sum(t1,t2);
    t1.display();
    t2.display();
    t3.display();
  } 
