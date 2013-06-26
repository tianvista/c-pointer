/*************************************************************************
    > File Name: exercise3-5.c
    > Author: wolf
    > Mail: tiandewei07@163.com 
    > Created Time: Wed 26 Jun 2013 03:10:33 PM CST
 ************************************************************************/

#include<stdio.h>

int main(void)
{
	long int li1 = 1234567;
	short int si1;
	int tmp;

	si1 = li1;
	tmp = li1 % 32767;
	si1 = tmp;
	printf("si1 = %d\n", si1);

	return 0;
}
