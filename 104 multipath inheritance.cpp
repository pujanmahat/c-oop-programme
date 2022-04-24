// wap using multipath inheritance 

#include <iostream>
using namespace std;
class student
{
	private:
		int roll;
	public:
		void setroll(int r)
		{
			roll=r;
		}
		void displayroll()
		{
			cout<<"Roll no="<<roll<<endl;
		}
};
class theory:virtual public student
{
	protected:
		float th_m1,th_m2;
		public:
   void	settheory(float m1, float m2)
   {
   	   th_m1=m1;
   	   th_m2=m2;
   }
   void displaytheory()
   {
   	 cout<<"Theroy 1="<<th_m1<<endl;
   	 cout<<"Theory 2="<<th_m2<<endl;
   }
};
class practical:virtual public student
{
	protected:
		float pr_m1,pr_m2;
		public:
   void	setpractical(float m1, float m2)
   {
   	   pr_m1=m1;
   	   pr_m2=m2;
   }
   void displaypractical()
   {
   	 cout<<"practical 1="<<pr_m1<<endl;
   	 cout<<"practical 2="<<pr_m2<<endl;
   }	
};

class result :public theory,public practical
{
	public:
	void display_marks()
	{
		float tot;
		tot=th_m1+th_m2+pr_m1+pr_m2;
		cout<<"Total marks="<<tot<<endl;
	}
};

int main()
{
	result rs;
	rs.setroll(5);
    rs.settheory(50,100);
    rs.setpractical(20,50);
    rs.displayroll();
    rs.displaytheory();
    rs.displaypractical();
    rs.display_marks();
}
