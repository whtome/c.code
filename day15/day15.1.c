#include<stdio.h>
#include<windows.h>

#pragma warning (disable:4996)

void Find(int a[],int n)
{
	int i = 0;
	for(; i < n; i++){
		int j = (i+1);
		for(; j < n; j++){
			if(a[i] == a[j]){
				break;
			}
			else if(j == n){
				printf("%d\n",a[i]);
			}
		}
	}
}

int main()
{
	int arr[8] = {4,2,3,5,2,3,4,6};

	Find(arr,8);

	system("pause");
	return 0;
}