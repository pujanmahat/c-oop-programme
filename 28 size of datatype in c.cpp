// wap to display size of bytes of dataypes in c 

#include<stdio.h>
int main()
{
	int inttype;
	char chartype;
	float floattype;
	printf("%zu\n",sizeof(inttype));
    printf("%zu\n",sizeof(chartype));
    printf("%zu\n",sizeof(floattype));
}
