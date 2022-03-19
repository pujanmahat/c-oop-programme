//wap to display the name,id,marks of three subject
//and having private member function float calculatetotal()
//using oop in c++

#include <iostream>
using namespace std;
class operation
{
	private:
		int id;
		char name[50];
		float science,maths,english;
		float calculatetotal()      //private member function
		{
			return(maths+english+science);
		}
	public:
		void putdata()
		{
			cout<<"Enter id "<<endl;
			cin>>id;
			cout<<"enter name"<<endl;
			cin>>name;
			cout<<"Enter marks of three subject"<<endl;
			cin>>science>>maths>>english;
		}
		void display()
		{
			cout<<id<<endl;
			cout<<name<<endl;
			cout<<science<<endl<<maths<<endl<<english<<endl;
			cout<<calculatetotal();// displaying the private function
		}	
};
int main()
{
	operation o1;
	o1.putdata();
	o1.display();
}
