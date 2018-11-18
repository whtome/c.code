#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)


void FindKiller()
{
	char killer = 'A';
	for(; killer <= 'd'; killer++)
	{
		if((killer != 'A')+(killer == 'C')+(killer == 'D')+(killer != 'D') == 3) {
			printf("killer is : %c\n",killer);
		}
	}
}

int main()
{
	FindKiller();
	system("pause");
	return 0;
}