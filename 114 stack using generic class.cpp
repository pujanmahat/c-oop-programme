//wap to implement stack push and pop operation using 
//concept of generic class

#include <iostream>
using namespace std;
template <class T>
class stacklist
{
	int top,maxsize;
	T stack[100];
	public:
		stacklist()
		{
			top=-1;
			maxsize=100;
		}
		void push(T item)
		{
			top++;
			stack[top]=item;
		}
		T pop()
		{
		 T item;
		 item=stack[top];
		 top--;
		 return (item);
		}
};
int main()
{
	stacklist <int> s;
	s.push(5);
	s.push(10);
	cout<<"item popped"<<s.pop()<<endl;
	cout<<"item popped"<<s.pop();
}
