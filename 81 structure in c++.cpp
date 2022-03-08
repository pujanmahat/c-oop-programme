//wap to input id,name and roll of student
//using concept of c++ structure 

#include <iostream>
using namespace std;
struct student            //class=struct(we can use class as well)
{                           
	private:
		int id;
		char name[50];
		int roll;
		
		public:
			void setdata()
			{
				cout<<"Enter id, name and roll "<<endl;
				cin>>id>>name>>roll;
			}
			void displaydata()
			{
				cout<<"Id="<<id<<endl;
				cout<<"Name="<<name<<endl;
				cout<<"Roll="<<roll<<endl;
			}
};
int main()
{
	student s;
	s.setdata();
	s.displaydata();
}
