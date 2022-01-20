// wap to display area and perimeter of rectangele using (pop in c with function)

#include<stdio.h>
int getarea(int,int);
int getperimeter(int,int);
int main()
{
	int len,bre,area,perimeter;
	printf("Enter length and breadth\n");
	scanf("%d%d",&len,&bre);
	area=getarea(len,bre);
	perimeter=getperimeter(len,bre);
	printf("the area of rectangle is %d\n",area);
	printf("The perimeter of rectangle is %d\n",perimeter);
	
}
	 getarea(int len,int bre)
   // void getarea()
	{
		return (len*bre);
	}
//	void getperimeter()
	 getperimeter(int len,int bre)
	{
		return (2*(len+bre));
	}


