#include<stdio.h>
int set_bit(int x);
void main()
{
	int x;
	printf("enter x value\n");
	scanf("%d",&x);
	set_bit(x);
}
int set_bit(int x)
{
	int i,bit,bit2;
	printf("enter set bit number\n");
	scanf("%d-%d",&bit,&bit2);
	x=x|(0x1<<bit);
	x=x|(0x1<<bit2);
	printf("%d\n",x);
}

