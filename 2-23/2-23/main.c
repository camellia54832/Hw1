#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b,c;

	scanf_s("%d%d%d", &a, &b,&c);

	if (a == b && b == c)
	{
		printf("largest:%d\nsmallest:%d\n", a, a);
		
	}
	if (a == b)
	{
		if (b > c)
			printf("largest:%d\nsmallest:%d\n", a, c);
		if (b < c)
			printf("largest:%d\nsmallest:%d\n", c, a);
	}

	if (b == c)
	{
		if (a > b)
			printf("largest:%d\nsmallest:%d\n", a, b);
		if (a < b)
			printf("largest:%d\nsmallest:%d\n", b, a);
	}

	if (c == a)
	{
		if (b > c)
			printf("largest:%d\nsmallest:%d\n", b, c);
		if (b < c)
			printf("largest:%d\nsmallest:%d\n", c, b);
	}

	if (a > b && b != c)
	{
		if (a > c)
		{
			if (b > c)
				printf("largest:%d\nsmallest:%d\n", a, c);
			else
				printf("largest:%d\nsmallest:%d\n", a, b);
		}
	}

	if (b > a && a != c)
	{
		if (b > c)
		{
			if (a > c)
				printf("largest:%d\nsmallest:%d\n", b, c);
			else
				printf("largest:%d\nsmallest:%d\n", b, a);
		}
	}

	if (c > a && a != b)
	{
		if (c > b)
		{
			if (a > b)
				printf("largest:%d\nsmallest:%d\n", c, b);
			else
				printf("largest:%d\nsmallest:%d\n", c, a);
		}
	}

	system("pause");
	return 0;

}