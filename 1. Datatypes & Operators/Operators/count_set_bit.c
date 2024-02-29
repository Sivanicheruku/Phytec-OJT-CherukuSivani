#include<stdio.h>
void main()
{
	int num;
	int c=0,i;
	printf("enter number:\n");
	scanf("%d",&num);
	for(i=0;i<8;i++)
	{
		if((num&0x1<<i)!=0)
			c++;
	}
	printf("set bit count:%d\n",c);
}

