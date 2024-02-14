#include<stdio.h>
void swap(int *a, int *b)
{
	int temp=*a;
	*a = *b;
	*b=temp;
}
void sortasc(int *num1 ,int *num2,int *num3)
{
	if(*num1 > *num2)
	{
		swap(num1,num2);
	}
	if(*num1 > *num3)
	{
		swap(num1,num3);
	}
	if(*num2 > *num3)
	{
		swap(num2,num3);
	}
}
