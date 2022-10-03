#include <stdio.h>
#include <stdlib.h>

int main()
{
	double mile, oil, km, park, toll,total;
	printf("一整天的總里程數\n");
	printf("汽油一公升 / 加侖多少錢\n");
	printf("平均一公升 / 加侖能行駛多少公里\n");
	printf("一天的停車費\n");
	printf("一天的通行費(過路費)\n");

	scanf_s("%lf %lf %lf %lf %lf", &mile,&oil,&km,&park,&toll);

	total = ((mile / km)*oil) + park + toll;

	printf("total= %lf\n", total);

	system("pause");
	return 0;

}
