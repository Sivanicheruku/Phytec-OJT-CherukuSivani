#include<stdio.h>
void main()
{
       unsigned int num,bit;
	printf("enter number\n");
	scanf("%d",&num);
	num=num|(0x1<<7);
	printf("%x\n",num);
}

