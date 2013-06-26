/*************************************************************************
    > File Name: exercise6.c
    > Author: wolf
    > Mail: tiandewei07@163.com 
    > Created Time: Wed 26 Jun 2013 08:44:49 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_CHAR		256

int substr(char dst[], char src[], int start, int len)
{
	char *dest;
	char *pos;	
	if(start > strlen(src))
	{
		printf("start position is error\n");
		exit(-1);
	}
	if(len < 0)
	{
		printf("len < 0 is error\n");
		exit(-1);
	}
	dest = dst;
	pos = src + start;
	while(len-- &&(*dest++ = *pos++) != '\0')
		;
	dest = '\0';
	return (pos - src - start);	
}

int main(void)
{
	char str[MAX_CHAR];
	char dst[MAX_CHAR];
	int cnt;
	int start, len;

	gets(str);
	printf("copy start pos and len:");
	scanf("%d %d", &start, &len);
	cnt = substr(dst, str,  start, len);
	
	printf("dst=%s, cnt=%d\n", dst, cnt);

	return 0;
}
