// wap to display sum and product of two numbers using pop in c 

#include <stdio.h>
int main()
{
	int a,b,sum,prod;
	printf("enter any two numbers\n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	prod=a*b;
	printf("The sum is %d\n",sum);
	printf("The product is %d",prod);
	return 0;
}
