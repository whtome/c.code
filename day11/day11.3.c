#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

#pragma warning (disable:4996)

void Yang(int n_)
{
	int **p = (int **)malloc(sizeof(int*) * n_);
	int i_ = 0;
	for(; i_ < n_; i_++) {
		p[i_] = (int *)malloc(sizeof(int) * n_);
	}

	for(i_ = 0; i_ < n_; i_++){
		p[i_][0] = 1;
		p[i_][i_] = 1;
	}

	i_=2;
	for(; i_ < n_; i_++){
		int j_ = 1;
		for(; j_ < i_; j_++){
			p[i_][j_] = p[i_-1][j_] + p[i_-1][j_-1];
		}
	}

	for(i_ = 0; i_ < n_; i_++){
		int j_ =0;
		for(; j_ <= i_; j_++){
			printf("%d ",p[i_][j_]);
		}
		printf("\n");
	}

	for(i_ = 0; i_ < n_; i_++){
		free(p[i_]);
	}
	free(p);
}

int main()
{
	int n=-1;
	printf("Please enter :");
	scanf("%d",&n);

	Yang(n);
	system("pause");
	return 0;
}