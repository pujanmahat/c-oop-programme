//wap to represent a bank account

#include <iostream>
using namespace std;
class account
{
	private:
		char name[50],acctype[50];
		long accno;
		float bal=0;
	public:
	    void setdata()
		{
		  cout<<"Enter the account holder name"<<endl;
		  cin.getline(name ,50);
		  cout<<"Enter the account type "<<endl;
		  cin>>acctype;
		  cout<<"Enter the account number "<<endl;
		  cin>>accno;	
		}
		void deposit()
		{
		  float dep;
		  cout<<"Enter the deposited amount "<<endl;
		  cin>>dep;
		  bal=bal+dep;
		  cout<<"Amount deposited successfully"<<endl;
		}
		void withdraw()
		{
		   float wdraw;
		   cout<<"Enter the withdraw amount "<<endl;
		   cin>>wdraw;
		   if(wdraw>bal)
		   {
		   	 cout<<"Insufficient balance "<<endl;
		   }
		   else
		   {
		     bal=bal-wdraw;
		     cout<<"Withdraw successfully"<<endl;
		   }	
		}
		void display()
		{
          cout<<"Name="<<name<<endl;
		  cout<<"Remaining Balance="<<bal<<endl;
		  cout<<"Account type="<<acctype<<endl;
		  cout<<"Account number "<<accno<<endl;			
		}	
};
int main()
{
	account a1;
	a1.setdata();
	a1.deposit();
	a1.withdraw();
	a1.display();
}
