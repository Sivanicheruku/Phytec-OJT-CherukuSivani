#include<stdio.h>
void main()
{
	unsigned int num,i;
	printf("enter number\n");
	scanf("%x",&num);
	for(i=0;i<31;i++)
	{
		if((i>=0)&&(i<=7))
			num=num^(0x1<<i);
	}
	printf("%x\n",num);
}
