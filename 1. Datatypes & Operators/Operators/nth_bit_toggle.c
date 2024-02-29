// nth bit toggle

#include<stdio.h>
void main()
{
	int num,bit;
	printf("enter number:\n");
	scanf("%d",&num);
	printf("enter bit pos is 1 to 15 :\n");
	scanf("%d",&bit);
	for(int i=0;i<=15;i++)
	{
		if(bit==i)
		{
			num=num^bit;

		}
        } 

	printf("%d\n",num);
}

