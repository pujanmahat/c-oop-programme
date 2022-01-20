// wap to display sum and product of two numbers (using pop in c with function)

#include<stdio.h>
int sum(int ,int);
int prod(int ,int);
int main()
{
	int a,b,x,y;
	printf("Enter any two numbers\n");
	scanf("%d%d",&a,&b);
	x=sum(a,b);
	y=prod(a,b);
	printf("The sum is %d\n",x);
	printf("The product is %d\n",y);
}
int sum(int a, int b)
{
	return (a+b);
}
int prod(int a, int b)
{
	return (a*b);
}

