//wap using class and object 

#include <iostream>
using namespace std;
class person
{
	//Data
	public:
		int id;
		string name;
		double height;
		
		//Function
		void getname()
		{
			cout<<"Name ="<<name<<endl;
			cout<<"id ="<<id<<endl;
			cout<<"height ="<<height<<endl;
		}
};
int main()
{
	person p;
	p.id=1;
	p.name="pujan";
	p.height=5.8;
	p.getname();
	
}
