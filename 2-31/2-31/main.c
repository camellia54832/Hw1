#include <stdio.h>
#include <stdlib.h>

int main()
{
	int square, cube;
	printf("number  square  cube\n");
	for (int i = 0; i <= 10; i++)
	{
		square = i * i;
		cube = i * i*i;
		printf("%-7d %-7d %-7d\n", i, square, cube);
		square = cube = 0;
	}

	system("pause");
	return 0;
}