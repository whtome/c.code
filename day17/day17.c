#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)

int main()
{


	/*指针和数组*/
	/*int i = 0;
	int arr[] = {1,2,3,4,5,6,7,8,9,};
	int *p = arr;
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p    <==>  p+%d = %p\n",i,&arr[i],i,p+i);
	}*/


	/*指针和数组名*/
	/*int arr[10] = {1,2,3,4,5,6,7,8,9,0};
	printf("%p\n",arr);
	printf("%p\n",&arr[0]);
*/


	/*int n = 0x11223344;
	char *pc = (char *)&n;
	char *pi = &n;
	*pc = 0x55;
	*pi = 0;*/


	/*指针+-整数*/
	/*int n = 10;
	char *pc = (char*)&n;
	int *pi = &n;

	printf("%p\n",&n);
	printf("%p\n",pc);
	printf("%p\n",pc+1);
	printf("%p\n",pi);
	printf("%p\n",pi+1);*/
	system("pause");
	return 0;
}