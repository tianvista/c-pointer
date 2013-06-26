/*************************************************************************
    > File Name: exercise3.c
    > Author: wolf
    > Mail: tiandewei07@163.com 
    > Created Time: Wed 26 Jun 2013 07:46:24 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

typedef enum  {
	eq_triangle, iso_triangle, other_triangle, none_triangle
} triangle_type;


/*判断a, b, c 是等边三角形, 等腰三角,其他三角形,非三角形*/
triangle_type  triangle_judge(int a, int b, int c)
{
	triangle_type type;

	if(a <= 0 || b <= 0 || c <= 0)
	{
		printf("edge > 0\n");
		exit(-1);
	}
	if(a == b)
	{
		if(b == c)
			type = eq_triangle;
		else
			type = iso_triangle;
	}
	else
	{
		if(b == c || a == c)
			type = iso_triangle;
		else
			if((a + b ) > c && (a + c) > b && (b + c) > a)
				type = other_triangle;
			else
				type = none_triangle;
	}

	return type;
}

int main(void)
{
	int a, b, c;
	triangle_type type;

	printf("input three edge: ");
	scanf("%d %d %d", &a, &b, &c);
	type = triangle_judge(a, b, c);
	switch(type)
	{
		case eq_triangle:
			printf("a, b, c is equilateral triangle\n");
			break;
		case iso_triangle:
			printf("a, b, c is isosceles triangle\n");
			break;
		case other_triangle:
			printf("a, b, c is other triangle\n");
			break;
		case none_triangle:
			printf("a, b, c can't construct triangle\n");
			break;
		default:
			printf("error\n");
			break;
	}

	return 0;

}
