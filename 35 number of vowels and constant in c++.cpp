// wap to display number of vowels,constant, digits,white space,words entered by user in c++

#include<iostream>
using namespace std;
int main()
{
	char str[100];
	int countvowels,countconsonents,countdigits,countspace,countwords;
	cout<<"enter the full name "<<endl;
    cin.getline(str,100);
    cout<<" "<<str<<endl;
    for(int i=0;str[i]!='\0';i++)
    {
     if ((str[i]=='a')|| (str[i]=='e') || (str[i]=='i') || (str[i]=='o') ||(str[i]=='u') || (str[i]=='A') || (str[i]=='E') || (str[i]=='I') || (str[i]=='O')  || (str[i]=='U'))
     {
     	countvowels++;
	 }
	 else if ( str[i]==' ')
	 {
	 	countspace++;
	 }
	 else if( ( str[i] >='a' && str[i] <= 'z' ) || ( str[i] >='A' && str[i] <= 'Z'  ))
	 {
	 	countconsonents++;
	 }
	 else if ( str[i]>='0' && str[i]<= '9' )
	 {
	 	countdigits++;
	 }
//	 else if ( str[i]==' ')
//	 {
//	 	countspace++;
//	 }
	 else{
	 	cout<<"invalid";
	 }
	}
	countwords=countspace +1;
	
	cout<<countvowels<<endl;
	cout<<countspace<<endl;
	cout<<countconsonents<<endl;
	cout<<countdigits<<endl;
//	cout<<countspace<<endl;
	cout<<countwords<<endl;
	return 0;
}
