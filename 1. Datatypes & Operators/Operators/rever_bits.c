#include<stdio.h>
void main()
{
	int num;
	printf("enter number\n");
	scanf("%d",&num);
	for(int i=0;i<8;i++)
	{
		for(int j=7;j>=0;j--)
		{
			if((num<<i)!=(num<<j))
			{
				num=num^(0x1<<i);
				num=num^(0x1<<j);
			}
		}
	}
	printf("%d\n",num);
}
