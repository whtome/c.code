#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)

typedef unsigned int u_int_t;

void PrintBitData(u_int_t x_)
{
	u_int_t flag_ =0x8000000;
	while(flag_)
	{
		if(flag_ & x_){
		   printf("1");
		}
		else {
		   printf("0");
		}
		flag_>>=1;
	}
	printf("\n");
}

int main()
{
	u_int_t data;
	printf("Please enter: ");
	scanf("%d",&data);

    PrintBitData(data);
	system("pause");
	return 0;
}