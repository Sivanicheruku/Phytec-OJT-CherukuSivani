// c program for print LSB bit 
 
 #include<stdio.h>
void main()
{
	int num;
	printf("enter number:\n");
	scanf("%d",&num);
	for(int i=0;i<16;i++)
	{
		if(i==0)
		{
			if(num&0x1<<i)
				printf("LSB IS : 1\n");
				else
					printf("LSB IS : 0\n");
		}
		if(i==16)
		{
			if(num&0x1<<i)
				printf("MSB BIT IS :1 \n");
			else
				printf("MSB BIT IS :0 \n");
	}
}
}
