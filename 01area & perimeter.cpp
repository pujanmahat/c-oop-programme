// wap to display area and perimeter of rectangle using (pop in c)

#include<stdio.h>
int main()
{
	int len,bre,area ,perimeter;
	printf("Enter length and breadth\n");
	scanf("%d%d",&len,&bre);
	area= len*bre;
	perimeter=(2*(len+bre));
	printf("The area of rectangle is %d\n",area);
	printf("The perimeter of rectangle is%d\n",perimeter);
	return 0;
}
