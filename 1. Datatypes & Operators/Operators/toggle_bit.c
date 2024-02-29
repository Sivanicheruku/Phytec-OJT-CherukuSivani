#include<stdio.h>
void main()
{
	int x;
	printf("enter x value\n");
	scanf("%d",&x);
	for(int i=0;i<4;i++)
	{
		x=x^(0x1<<i);
	}
	printf("%d\n",x);
}
