// Array with in a class
// wap to display the largest among 10 number 

#include <iostream>
using namespace std;
class largest
{
	private:
		int n[10];
	public:
		void putdata()
		{
			cout<<"Enter the ten number "<<endl;
			for(int i=0;i<10;i++)
			{
			   cin>>n[i];	
			}
		}
		int display()
		{
		   int max=n[0];
		   for(int i=0;i<10;i++)
		   {
		   	 if(n[i]>max)
		   	{
		   	 max=n[i];	
			}
		   }
		}
		void result()
		{
			int max;
		    cout<<"Largest number "<<max<<endl;
		    
		}
};
int main()
{
    largest o1;
	o1.putdata();
	o1.display();
	o1.result();
}
