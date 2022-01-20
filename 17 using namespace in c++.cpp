// wap to display "this is my first program" and "this is my seocnd program" using namespace directive .


#include <iostream>
using namespace std;
 namespace first
{
	void display()
	{
		cout<<"this is my first program"<<endl;
	}
}
namespace second
	
{
	void display()
	{
		cout<<"this is my second program "<<endl; 
	}
}
using namespace first;
int main()
{
	display();
//	first::display();
//	second::display();
}
