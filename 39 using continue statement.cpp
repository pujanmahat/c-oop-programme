//wap to display the number from 200 to 400 except 207 usin continue statemetn in c++ programming

#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=200;i<=400;i++)
	{
		if (i==207)
		{
			continue;
		}
		cout<<i<<"\t";
	}
	
}
