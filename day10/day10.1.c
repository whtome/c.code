#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)


#define NUM 8

int CountBints(unsigned x_)
{
	//2.
	int count = 0;
	while(x_)
	{
		x_ = x_&(x_-1);
		count++;
	}
	return count;
	//1.
	/*int count = 0;
	unsigned int flag_ = 1;
	int top_ = sizeof(x_)*NUM;
	while(top_)
	{
		if(flag_&x_)
		{
			count++;
		}
		top_--;
		flag_<<=1;
	}
	return count;*/
}
int main()
{
	unsigned int data;
	int count = 0;
	printf("Please enter: ");
	scanf("%d",&data);

	count = CountBints(data);
	printf("%d bit 1 num is %d :",data,count);
	system("pause");
	return 0;
}