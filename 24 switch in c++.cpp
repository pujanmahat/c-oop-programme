// wap to display the addition, subtraction,multiplication,division usind switch structure in c++

#include<iostream>
using namespace std;
int main()
{
	int n;
	float num1,num2;
	cout<<"enter any number "<<endl;
	cin>>n;
	cout<<"Enter any two number "<<endl;
	cin>>num1>>num2;
	cout<<"enter 1 for addition "<<endl;
	cout<<"enter 2 for subtraction"<<endl;
	cout<<"enter 3 for multiplication "<<endl;
	cout<<"enter 4 for division "<<endl;
	switch (n)
	{
		float add;
		case 1:
		add=num1+num2;
		cout<<"the sum of two number is "<<add<<endl;
		break;
			
			float subtract;
			case 2:
				subtract=num1-num2;
				cout<<"the subtract of two number is "<<subtract<<endl;
				break;
					
					float multiplication;
					case 3:
						multiplication=num1*num2;
						cout<<"the multiplication of two number is "<<multiplication<<endl;
						break;
							
							float division;
							case 4:
								division=num1/num2;
								cout<<"the division of two number is "<<division<<endl;
								break;
									
									default:
										case 5:
											cout<<"invalid"<<endl;
											break;
	}
	
}
