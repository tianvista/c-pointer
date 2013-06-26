/*************************************************************************
    > File Name: exercise5.c
    > Author: wolf
    > Mail: tiandewei07@163.com 
    > Created Time: Wed 26 Jun 2013 08:34:37 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX			128

int main(void)
{
	char str[128];   //存储输入的字符串
	char tmp[128];   //临时存储字符串
	int flag;		//标识是否已经输出

	gets(str);

	while(str)
	{
		if(strcmp(tmp, str) != 0)   //两个字符串不相等
		{
			strcpy(tmp, str);
			flag = 0;
		}
		else
		{
			if(flag == 0)
				printf("%s", str);
			flag = 1;
		}
		gets(str);
	}

	return 0;
}
