#include <stdio.h>
#include <stdlib.h>

int main()
{
	double mile, oil, km, park, toll,total;
	printf("�@��Ѫ��`���{��\n");
	printf("�T�o�@���� / �[�ڦh�ֿ�\n");
	printf("�����@���� / �[�گ��p�h�֤���\n");
	printf("�@�Ѫ������O\n");
	printf("�@�Ѫ��q��O(�L���O)\n");

	scanf_s("%lf %lf %lf %lf %lf", &mile,&oil,&km,&park,&toll);

	total = ((mile / km)*oil) + park + toll;

	printf("total= %lf\n", total);

	system("pause");
	return 0;

}
