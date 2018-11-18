#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)

typedef unsigned int u_int_t;

void PrintBit(u_int_t data)
{
	u_int_t flag = 0x80000000;//1000 0000 0000 0000 0000 0000 0000 0000
	printf("Å¼Êıbit: ");
	while(flag)
	{
		if(flag & data)
		{
			printf("1 ");
		}
		else 
			printf("0 ");
		flag>>=2;
	}
	printf("\n");
	flag = 0x40000000;//0100 0000 0000 0000 0000 0000 0000 0000
	printf("ÆæÊıbit: ");
	while(flag)
	{
		if(flag & data)
		{
			printf("1 ");
		}
		else
			printf("0 ");
		flag>>=2;
	}
	printf("\n");
}

int main()
{
	u_int_t data;
	int count = 0;
	printf("Please enter: ");
	scanf("%d",&data);

    PrintBit(data);
	system("pause");
	return 0;
}