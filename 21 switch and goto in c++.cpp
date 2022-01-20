// wap to display area of rectangle,circle and triangle using switch case and goto in c++ 


#include <iostream>
#include<ctype.h>
//#include <string.h>
//#define pi=3.14;
using namespace std;
int main()
{
	 char ch;
	 z:
	 float l,b,r,h;
	 int x;
	 float rectangle,circle, triangle,pi=3.14;
	 cout<<"enter any character "<<endl;
	 cin>>ch;
	 x=toupper(ch);      //this strupr helps to change small letter to capital letter 
	 switch (x)
	 {
	 	case 'R':
	 		cout<<"enter any two number "<<endl;
	 		cin>>l>>b;
	 		rectangle =l*b;
	 		cout<<"the area of rectangle is "<<rectangle <<endl;
	 		break;
	 		
	 		case'C':
	 			cout<<"enter a number "<<endl;
	 			cin>>r;
	 			circle=pi*r*r;
	 			cout<<"the area of circle is "<<circle<<endl;
	 			break;
	 			
	 			case 'T':
	 				cout<<"enter two number "<<endl;
	 				cin>>b>>h;
	 			    triangle=(1.0/2.0)*b*h;
	 			    cout<<"the triangle is "<<triangle <<endl;
	 			    break;
	 			    	
	 			    	
	 			    default:
	 			    	cout<<"enter r or c or t"<<endl;
	 			    	goto z;
	 			    	cout<<"invalid"<<endl;
	 			    	break;
	 }
}
