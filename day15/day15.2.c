#include<stdio.h>
#include<windows.h>

#pragma warning (disable:4996)


int Shop(int x_)
{
	/*int num = 1;*/
	int count_ = x_;
	while(x_/2)
	{
	/*	num += x_%2;*/
		if(0 == x_%2){
			x_ = x_/2;
			count_ += x_;
		}
		else{
			x_ = x_/2;
			count_ += x_;
			x_++;
		}
		
	}
	//printf("%d\n",num);
	//while(num/2)
	//{
	//	num = num/2;
	//	count_ += num;
	//}
	return count_;
}

int main()
{
	int x = 20;
	int count = Shop(x);

	printf("%d\n",count);
	system("pause");
	return 0;
}