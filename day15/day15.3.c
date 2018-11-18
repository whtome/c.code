#include<stdio.h>
#include<windows.h>
#include<assert.h>

#pragma warning (disable:4996)


void My_strcpy(char *dest_,char *src_)
{
	char *ret_ = dest_;
	assert(dest_ != NULL);
	assert(src_ != NULL);

	while((*dest_++ = *src_++))//先解引用，再判断最后++;
	{
		;
	}
	printf("%s\n",ret_);
}


int main()
{
	char dest[80];
	char src[] = "hello wanghong!";

	My_strcpy(dest,src);
	/*printf("%s\n",dest);*/
	system("pause");
	return 0;
}