#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)

typedef unsigned int u_int_t;

int CountBints (u_int_t x_)
{
	int count = 0;
	while(x_)
	{
		x_ = x_&(x_-1);
		count++;
	}
	return count;
}


int DifBit(u_int_t x_,u_int_t y_)
{
	u_int_t res_ = x_ ^ y_;
	return CountBints(res_);
}

int main()
{
	int count = 0;
	u_int_t x_,y_;
	printf("Please enter<x,y>: ");
	scanf("%u %u",&x_,&y_);

    count = DifBit(x_,y_);
	printf("%u %u %d\n",x_,y_,count);
	system("pause");
	return 0;
}