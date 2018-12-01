#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<search.h>

#pragma warning (disable:4996)

//void printf_arr1(int arr[3][5],int row,int col)
//{
//	int i = 0;
//	for(i = 0; i < row; i++){
//		int j = 0;
//		for(j = 0; j < col; j++){
//			printf("%d",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void printf_arr2(int (*arr)[5],int row, int col)
//{
//	int i = 0;
//	for(i = 0; i < row; i++){
//		int j = 0;
//		for(j = 0; j < col; j++){
//			printf("%d",arr[i][j]);
//		}
//		printf("\n");
//	}
//}





//int int_cmp(const void *p1,const void *p2)
//{
//	return (*(int *)p1 > *(int *)p2);
//}



//
//int int_cmp(const void *p1, const void *p2)
//{
//	return (*(int *)p1 > *(int *)p2);
//}
//void _swap(void *p1, void *p2, int size)
//{
//	int i = 0;
//	for(i = 0; i < size; i++){
//		char tmp = *((char *)p1 + i);
//		*((char *)p1 + i) = *((char *)p2 + i);
//		*((char *)p2 + i) = tmp;
//	}
//}
//void bubble(void *base, int count, int size, int(*cmp)(void *,void *))
//{
//	int i = 0;
//	int j = 0;
//	for(i = 0; i < count - 1; i++){
//		for(j = 0; j < count-i-1; j++){
//			if(cmp((char *)base + j*size,(char *)base + (j+1)*size) > 0){
//				_swap((char *)base + j*size,(char *)base + (j+1)*size, size);
//			}
//		}
//	}
//}

​	


int main()
{
	
	/*int arr[] = {1,3,5,7,9,2,4,6,8,0};
	int i = 0;
	bubble(arr, sizeof(arr)/sizeof(arr[0]),sizeof(int),int_cmp);
	for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
		printf("%d",arr[i]);
	}
	printf("\n");*/


	/*qsort函数的使用*/
	
	//int arr[] = {1,3,5,7,9,2,4,6,8,0};
	//int i = 0;
	
	//qsort(arr,sizeof(arr)/sizeof(arr[10]),sizeof(int),int_cmp);
	//for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
	//	printf("%d",arr[i]);
	//}
	//printf("\n");



	/*数组指针的使用*/
	
	//int arr[3][5] = {1,2,3,4,5,6,7,8,9,10};
	//printf_arr1(arr,3,5);
	
	//数组名arr，表示首地址
	//但二维数组的首元素是二维数组的第一行
	//所以这里传递的arr,其实相当于第一行的地址，是一维数组的地址
	//可以用数组指针接收
	
	//printf_arr2(arr,3,5);




	/*&数组名和数组名*/
	
	//int arr[10] = {0};
	//printf("arr = %p\n",arr);//0046F9B8   数组首元素的地址
	//printf("&arr = %p\n",&arr);//0046F9B8  数组的地址，地址就是指针
	
	//printf("arr+1 = %p\n",arr+1);//0046F9BC  arr与arr+1差值为4
	//printf("&arr+1 = %p\n",&arr+1);//0046F9E0  &arr+1与&arr差值为40，对指针加1就是加上指针所指类型的大小


	//int *p1[10];//指针数组
	//int (*p2)[10];//数组指针




	//字符数组 
	
	//char str1[] = "hello wanghong.";
	//char str2[] = "hrllo wanghong.";
	//char str3 = "hello wanghong.";
	//char str4 = "hello wanghong.";
	
	//if(str1 == str2){//str1和str2用相同的常量字符串初始化不同的数组，开辟出不同的内存块。
	//	printf("str1 and str2 are same\n");
	//}
	//else{
	//	printf("str1 and str2 are not same\n");
	//}
	//if(str3 == str4){//str3和str4指向同一块内存。
	//	printf("str3 and str4 are same\n");
	//}
	//else{
	//	printf("str3 and str4 are not same\n");
	//}
	system("pause");
	return 0;
}