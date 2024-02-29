#include<stdio.h>
void main()
{
	int num,bit,i;
	printf("enter number\n");
	scanf("%x",&num);
	for(i=0;i<8;i++)
	{
		num=num^(0x1<<i);
	}
	printf("%x\n",num);
}
