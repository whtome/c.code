#include<stdio.h>
#include<windows.h>
#include<assert.h>

#pragma warning (disable:4996)


void My_strcat(char *dest_,const char *src_)
{
	char *ret_ = dest_;
	assert(dest_ != NULL);
	assert(src_ != NULL);
	while(*dest_)
	{
		dest_++;
	}
	while((*dest_++ = *src_++))
	{
		;
	}
	//return ret_;
	printf("%s\n",ret_);
}

int main()
{
	//char *ret;
	char dst[] = "hello world,";
	char src[] = "hello wanghong!";

	My_strcat(dst,src);

	/*ret = My_strcat(dst,src);
	printf("%s\n",ret);*/

	/*printf("%s\n",dst);*/
	system("pause");
	return 0;
}

