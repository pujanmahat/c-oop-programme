// wap to display sunday monday....... using switch case and goto  in c++

#include <iostream>
using namespace std;
int main()
{
	int n;
	x:
	cout<<"enter a number"<<endl;
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<"sunday"<<endl;
			break;
			 
			 case 2:
			 	cout<<"monday"<<endl;
			 	break;
			 	
			 	case 3:
			 		cout<<"tuesday"<<endl;
			 		break;
			 		
			 		case 4:
			 			cout<<"wednesday"<<endl;
			 			break;
			 			
			 			default:
			 				cout<<"invalid"<<endl;
			 				cout<<"enter value between 1 to 4"<<endl; 
			 				goto x;
			 				break;
			 		
	}
	return 0; 
	

}
