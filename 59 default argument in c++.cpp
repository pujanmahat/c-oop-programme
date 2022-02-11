//wap to display default argument 

#include<iostream>
using namespace std;
float SI(float p, float t, float r=1.8)
{
	float res=(p*t*r)/100;
	return (res);
}
int main()
{
	float interest= SI(1000,10,5);
	cout<<"Simple interest="<<interest<<endl;
	
	interest=SI(1000,10);
	cout<<"Simple interest"<<interest<<endl;
}
