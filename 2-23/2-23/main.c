#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;

	scanf_s("%d%d", &a, &b);

	if (a > b)
		printf("%d > %d\n", a, b);
	if (a < b)
		printf("%d < %d\n", a, b);
	if (a == b)
		printf("%d = %d\n", a, b);

	system("pause");
	return 0;

}