/*************************************************************************
    > File Name: demo.c
    > Author: wolf
    > Mail: tiandewei07@163.com 
    > Created Time: Wed 26 Jun 2013 04:38:15 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAX_NUM   100

int is_prime(int n)
{
	int i;
	int s;

	if(n <= 0)
	{
		printf("n < 0, wrong!\n");
		exit(-1);
	}
	s = (int)sqrt(n);
	for(i = 2; i <= s; i++)
	{
		if(n % i == 0)
			return 0;
	}
	return 1;
}
int main(void)
{
	int a;
	int i;

	for(i = 1; i <= 100; i++)
		if(is_prime(i) == 1)
			printf("%d  ", i);
	printf("\n");

	return 0;
}
