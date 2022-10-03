#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	scanf_s("%d", &a);
	if ((a % 2) == 1)
		printf("%d is odd\n", a);
	else
		printf("%d is even\n", a);

	system("pause");
	return 0;
}