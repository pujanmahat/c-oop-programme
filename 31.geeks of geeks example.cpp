// C++ program to implement
// user-defined data types
#include <iostream>
using namespace std;
class GFG
{
public:
string fullname ;
void print()
{
	cout << "The full name is : " <<fullname <<endl;
			
}
};

// Driver codemain()
int main()
{
//char x;
GFG obj1;
//obj1.gfg = "GeeksForGeeks is the best Technical Website";
obj1.fullname ="pujan mahat ";
obj1.print();

//cout<<"the string is :"<<x<<endl;
return 0;
}

