// wap to display area and perimeter of rectangle (using function pop in c++)

#include<stdio.h>
int area(int l ,int b);
int perimeter(int l ,int b);
int main()
{
	int l,b,x,y; 
	printf("enter any two number \n");
	scanf("%d%d",&l,&b);
	x=area(l,b);
	y=perimeter(l,b);
	printf("the area is %d\n",x);
	printf("the perimeter is %d\n",y);
}
int area(int l, int b)
{
	return (l*b);
}
int perimeter(int l, int b)
{
	return (2*(l+b));
}

