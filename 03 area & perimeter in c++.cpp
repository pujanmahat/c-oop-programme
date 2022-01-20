// wap to display area and perimeter of rectangele using pop in c++ 

#include <iostream>
using namespace std;
int main()
{
	int len,bre,area,perimeter;
	cout<<"enter length and breadth"<<endl;
	cin>>len>>bre;
	area=len*bre;
	perimeter=2*(len+bre);
	cout<<"the area is "<<area<<endl;
	cout<<"the perimeter is"<<perimeter<<endl;
	return 0;
}
