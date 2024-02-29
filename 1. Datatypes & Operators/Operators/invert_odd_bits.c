//invert odd bits in a given number
#include<stdio.h>
void main()
{
        unsigned int num,bit=0,i;
        printf("enter number\n");
        scanf("%d",&num);
        for(i=0;i<8;i++)
        {
                if(i%2!=0)
                num=num^(0x1<<i);
        }
                printf("%x\n",num);

}



