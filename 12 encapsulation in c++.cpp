// wap to display two numbers and sum of two numbers using oop in c++ (in different way )(Encapsulation)

#include<iostream>
using namespace std;
class operation
{
	private:
		int a,b;
		public:
			void show()
			{
				cout<<"enter any two numbers "<<endl;
				cin>>a>>b;
			//	cout<<"the two numbers are "<<a<<endl<<b<<endl;			
}
    // void sum() 
    int sum()
{
//	cout<<"enter two numbers"<<endl;
//	cin>>a>>b;
//	cout<<"the sum of two numbers is "<<a+b<<endl;
    return (a+b);
}
};
int main()
{
	int sum;
	operation ob1;
	ob1.show();
    sum=ob1.sum();
    cout<<"the sum is "<<sum<<endl;
	return 0;
}

